#include "Student.h"
#include "Degree.h"
#include "Roster.h"


//Constructor definition

Student::Student() {}
Student::Student(std::string studentID, std::string firstName, std::string lastName, std::string email, int age, int daysInCourse[], DegreeProgram degreeProgram)
{
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->email = email;
    this->age = age;
    this->daysInCourse[n] = daysInCourse[n];
    this->degreeProgram = degreeProgram;
}

//Getter definitions

std::string Student::getStudentID()const { return studentID; }
std::string Student::getFirstName()const { return firstName; }
std::string Student::getLastName()const { return lastName; }
std::string Student::getEmail()const { return email; }
int Student::getAge()const { return age; }
int Student::getDaysInCourse()const { return daysInCourse[n]; }
DegreeProgram Student::getDegreeProgram()const { return degreeProgram; }

//Setter definitions

void Student::setStudentID(std::string studentID) { this->studentID = studentID; }
void Student::setFirstName(std::string firstName) { this->firstName = firstName; }
void Student::setLastName(std::string lastName) { this->lastName = lastName; }
void Student::setEmail(std::string email) { this->email = email; }
void Student::setAge(int age) { this->age = age; }
void Student::setDaysInCourse(int daysInCourse[]) { this->daysInCourse[n] = daysInCourse[n]; }
void Student::setDegreeProgram(DegreeProgram degreeProgram) { this->degreeProgram = degreeProgram; }

//Additional functions

void Student::print() {}
