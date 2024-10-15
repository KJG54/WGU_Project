#include "Student.h"
#include "Degree.h"
#include "Roster.h"

//Declaration of RosterArray

Student* classRosterArray[5];

Student* parse(std::string student)
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

	//Add parse for degreeprogram from string
	return new Student(stuID, first, last, email, stuAge, daysOfCourses, SECURITY);
}

//Functions

void stringToObject() 
{

	for (int i = 0; i < 3; i++)
	{
		classRosterArray[i] = parse(studentData[i]);
		std::cout << classRosterArray[i];
	}
	//make a complete student object for all students
}

void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)
{


}
void remove(std::string studentID)
{}
void printAll()
{}
void printAverageDaysInCourse(std::string studentID)
{}
void printInvalidEmails()
{}
void printByDegreeProgram(DegreeProgram degreeProgram)
{}

