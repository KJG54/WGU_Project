#include <string>
#include <iostream>
#include "Degree.h"


class Student {

private:

    std::string studentID;
    std::string firstName;
    std::string lastName;
    std::string email;
    int age;
    int daysInCourse[3];
    DegreeProgram degreeProgram;

public:


    //Constructor
    Student(std::string studentID, std::string firstName, std::string lastName, std::string email, int age, int daysInCourse[3], DegreeProgram degreeProgram)
    {
        this->studentID = studentID;
        this->firstName = firstName;
        this->lastName = lastName;
        this->email = email;
        this->age = age;
        this->daysInCourse[3] = daysInCourse[3];
        this->degreeProgram = degreeProgram;
    };

    //Getters
    std::string getStudentID()const { return studentID; }
    std::string getFirstName()const { return firstName; }
    std::string getLastName()const { return lastName; }
    std::string getEmail()const { return email; }
    int getAge()const { return age; }
    int getDaysInCourse()const { return daysInCourse[3]; }
    DegreeProgram getDegreeProgram()const { return degreeProgram; }

    //Setters
    void setStudentID(std::string studentID) { this->studentID = studentID; }
    void setFirstName(std::string firstName) { this->firstName = firstName; }
    void setLastName(std::string lastName) { this->lastName = lastName; }
    void setEmail(std::string email) { this->email = email; }
    void setAge(int age) { this->age = age; }
    void setDaysInCourse(int daysInCourse[3]) { this->daysInCourse[3] = daysInCourse[3]; }
    void setDegreeProgram(DegreeProgram degreeProgram) { this->degreeProgram = degreeProgram; }

    //Print function
    void print();

 
};