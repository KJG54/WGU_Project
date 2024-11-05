#include "Student.h"
#include "Degree.h"
#include "Roster.h"



void Roster::parse(std::string student)
{
	size_t rhs = student.find(",");
	std::string stuID = student.substr(0,rhs);

	size_t lhs = rhs + 1;
	rhs = student.find(",", lhs);
	std::string first = student.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = student.find(",", lhs);
	std::string last = student.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = student.find(",", lhs);
	std::string email = student.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = student.find(",", lhs);
	int stuAge = stoi(student.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = student.find(",", lhs);
	int daysOfCourse1 = stoi(student.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = student.find(",", lhs);
	int daysOfCourse2 = stoi(student.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = student.find(",", lhs);
	int daysOfCourse3 = stoi(student.substr(lhs, rhs - lhs));
	
	int daysOfCourses[3] = {daysOfCourse1, daysOfCourse2, daysOfCourse3};

	lhs = rhs + 1;
	rhs = student.find(",", lhs);
	std::string degree = student.substr(lhs, rhs - lhs);

	DegreeProgram program = DegreeProgram::SECURITY;
	
	if (degree == "SOFTWARE")
	{
		program = DegreeProgram::SOFTWARE;
	}
	else if (degree == "NETWORK")
	{
		program = DegreeProgram::NETWORK;
	}
	Roster::add(stuID, first, last, email, stuAge, daysOfCourse1, daysOfCourse2, daysOfCourse3, program);
}

//Functions
//Create loop for add function that says if classRosterArray[j] has no value assigned then add the next new student object there.

void Roster::add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)
{
	int daysOf3Courses[3] = {daysInCourse1, daysInCourse2, daysInCourse3};
	classRosterArray[j] = new Student(studentID, firstName, lastName, emailAddress, age, daysOf3Courses, degreeProgram);
	j++;
}
void Roster::remove(std::string studentID)
{
	//Create a second classRoster array without the "deleted" object and just make the old roster equal the new one.
}
void Roster::printAll()
{
	for (int i = 0; i < 5; i++)
	{
		classRosterArray[i]->print();
	}
	std::cout << std::endl;
	 
}
void Roster::printAverageDaysInCourse(std::string studentID)
{
	float avg;
	float avgArr[5];
	int sum;
	int day1;
	int day2;
	int day3;

	for (int i = 0; i < 5; i++)
	{
		int* dayArr = classRosterArray[i]->getDaysInCourse();

		day1 = dayArr[0];
		day2 = dayArr[1];
		day3 = dayArr[2];

		sum = day1 + day2 + day3;
		avg = sum / 3.0;

		avgArr[i] = avg;
	}

		if (studentID == "A1")
		{
			std::cout << "Average Days in Course: " << avgArr[0] << std::endl;
		}
		else if (studentID == "A2")
		{
			std::cout << "Average Days in Course: " << avgArr[1] << std::endl;
		}
		else if (studentID == "A3")
		{
			std::cout << "Average Days in Course: " << avgArr[2] << std::endl;
		}
		else if (studentID == "A4")
		{
			std::cout << "Average Days in Course: " << avgArr[3] << std::endl;
		}
		else if (studentID == "A5")
		{
			std::cout << "Average Days in Course: " << avgArr[4] << std::endl;
		}
		
	
}
void Roster::printInvalidEmails()
{
	std::string emailArray[5];
	char at = '@';
	char period = '.';
	char space = ' ';

	for (int i = 0; i < 5; i++)
	{
		emailArray[i] = classRosterArray[i]->getEmail();

		if (emailArray[i].find(at) == std::string::npos ||
			emailArray[i].find(period) == std::string::npos ||
			emailArray[i].find(space) != std::string::npos)
		{
			std::cout << "Invalid email: " << emailArray[i] << std::endl;
		}

	}
	std::cout << std::endl;
}
void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{
	DegreeProgram sof = SOFTWARE;
	DegreeProgram net = NETWORK;
	DegreeProgram sec = SECURITY;
	DegreeProgram arr[5];
	std::string degree;

	switch (degreeProgram)
	{
	case SECURITY:
		degree = "SECURITY";
	case NETWORK:
		degree = "NETWORK";
	case SOFTWARE:
		degree = "SOFTWARE";
	}

	std::cout << "Degree Program: " << degree << std::endl;

	for (int i = 0; i < 5; i++)
	{

		arr[i] = classRosterArray[i]->getDegreeProgram();

		if (classRosterArray[i]->getDegreeProgram() == degreeProgram && degreeProgram == sof)
		{
			classRosterArray[i]->print();
		}
		else if (classRosterArray[i]->getDegreeProgram() == degreeProgram && degreeProgram == net)
		{
			classRosterArray[i]->print();
		}
		else if (classRosterArray[i]->getDegreeProgram() == degreeProgram && degreeProgram == sec)
		{
			classRosterArray[i]->print();
		}

	}
}

