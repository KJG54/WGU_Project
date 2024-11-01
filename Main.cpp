#include <iostream>
#include <string>
#include "Student.h"
#include "Degree.h"
#include "Roster.h"

int main() {
    std::cout << "Scripting and Programming - Applications - C867" << std::endl << "C++" << std::endl << "011544201" << std::endl << "Krystian Garcia" << std::endl << std::endl;
	
	Roster classRoster;

	for (int i = 0; i < 5; i++)
	{
		classRoster.parse(studentData[i]);
	}

	classRoster.printAll();
	
}
