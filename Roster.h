#include <iostream>
#include <string>



class Roster
{

public:

	//Declaration of RosterArray

	Student* classRosterArray[5];

	/*Constructor*/

	//Functions
	void stringToObject();

	void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);

	void remove(std::string studentID);

	void printAll();

	void printAverageDaysInCourse(std::string studentID);

	void printInvalidEmails();

	void printByDegreeProgram(DegreeProgram degreeProgram);

	void parse(std::string);


private:

};


