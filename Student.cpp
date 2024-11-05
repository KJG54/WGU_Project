#include "Student.h"
#include "Degree.h"
#include "Roster.h"


//Constructor definition

Student::Student(std::string studentID, std::string firstName, std::string lastName, std::string email, int age, const int daysInCourse[], DegreeProgram degreeProgram)
{
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->email = email;
    this->age = age;
    this->daysInCourses = new int [3];
    for (int i = 0; i < 3; i++)
    {
        daysInCourses[i] = daysInCourse[i];
    }
    this->degreeProgram = degreeProgram;
}

//Destructors



//Getter definitions

std::string Student::getStudentID()const { return studentID; }
std::string Student::getFirstName()const { return firstName; }
std::string Student::getLastName()const { return lastName; }
std::string Student::getEmail()const { return email; }
int Student::getAge()const { return age; }
int* Student::getDaysInCourse()const { return daysInCourses; }
//DegreeProgram Student::getDegreeProgram()const { return degreeProgram; }
std::string Student::getDegreeProgram()const 
{ 
    std::string degree;

    switch (degreeProgram)
    {
    case SECURITY:
        degree = "SECURITY";
        break;
    case NETWORK:
        degree = "NETWORK";
        break;
    case SOFTWARE:
        degree = "SOFTWARE";
        break;
    }
    return degree;
}

//Setter definitions

void Student::setStudentID(std::string studentID) { this->studentID = studentID; }
void Student::setFirstName(std::string firstName) { this->firstName = firstName; }
void Student::setLastName(std::string lastName) { this->lastName = lastName; }
void Student::setEmail(std::string email) { this->email = email; }
void Student::setAge(int age) { this->age = age; }
void Student::setDaysInCourse(int daysInCourse[]) { this->daysInCourses[n] = daysInCourse[n]; }
void Student::setDegreeProgram(DegreeProgram degreeProgram) { this->degreeProgram = degreeProgram; }

//Additional functions

void Student::print() 
{
    int* arr = getDaysInCourse();

    std::cout << getStudentID() << "\t";
    std::cout << "First Name: " << getFirstName() << "\t";
    std::cout << "Last Name: " << getLastName() << "\t";
    std::cout << "Age: " << getAge() << "\t";
    std::cout << "daysInCourse: {" << arr[0] << ", " << arr[1] << ", " << arr[2] << "} ";
    std::cout << "Degree Program: " << getDegreeProgram() << std::endl;
}
