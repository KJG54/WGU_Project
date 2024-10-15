#include <iostream>
#include <string>

Student* parse(std::string);

class Roster
{

public:

	/*Constructor*/

	Roster();

	//Declaration of RosterArray

	Student* classRosterArray[5];

	//loops



	//Functions
	void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);

	void remove(std::string studentID);

	void printAll();

	void printAverageDaysInCourse(std::string studentID);

	void printInvalidEmails();

	void printByDegreeProgram(DegreeProgram degreeProgram);


private:

	Student student1;
	Student student2;
	Student student3;
	Student student4;
	Student student5;
};


