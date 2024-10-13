#include <iostream>
#include "Student.h"
#include "Degree.h"
#include "Roster.h"

int main() {
    std::cout << "Scripting and Programming - Applications - C867" << std::endl << "C++" << std::endl << "011544201" << std::endl << "Krystian Garcia" << std::endl << std::endl;
    // std::cout << studentData[4];
     int exampleArray[]={3,3,3};
     Student example("A7","k","g","kg",2,exampleArray,SOFTWARE);
    // std::cout << std::endl;
    // std::cout << example.getStudentID();
    // example.setStudentID("A8");
    // std::cout << example.getStudentID();
    //example.setDaysInCourse(exampleArray);
    //std::cout << example.getDaysInCourse();
    example.print();
    //Testing for github
}




















// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
