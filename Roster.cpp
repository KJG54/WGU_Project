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
	//return new Student(stuID, first, last, email, stuAge, daysOfCourses, program);
}

//Functions

void Roster::add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)
{
	int j = 0;
	int daysOf3Courses[3] = {daysInCourse1, daysInCourse2, daysInCourse3};
	classRosterArray[j] = new Student(studentID, firstName, lastName, emailAddress, age, daysOf3Courses, degreeProgram);
	j++;
}
void Roster::remove(std::string studentID)
{}
void Roster::printAll()
{
	std::cout << classRosterArray[0]->getFirstName();
}
void Roster::printAverageDaysInCourse(std::string studentID)
{}
void Roster::printInvalidEmails()
{}
void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{}

