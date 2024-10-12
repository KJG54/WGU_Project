#include "Student.h"
#include "Degree.h"
#include "Roster.h"

class Roster
{

private:

	Student student1;
	Student student2;
	Student student3;
	Student student4;
	Student student5;


public:
	//Student* classRosterArray[];
	std::string* classRosterArray = new std::string[5];
	
	//Functions
	void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)
	{

	}
	void remove(std::string studentID)
	{

	}
	void printAll()
	{

	}
	void printAverageDaysInCourse(std::string studentID)
	{

	}
	void printInvalidEmails()
	{

	}
	void printByDegreeProgram(DegreeProgram degreeProgram)
	{

	}
};


