#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
#include <iostream>
#include "Degree.h"

const std::string studentData[] = {
    "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
    "A5,Krystian,Garcia,Krystian.Garcia@Gmail.com,24,30,30,30,SOFTWARE"
};

class Student {

public:

    //number of slots for daysInCourse array

    static const int n = 3;

    //Constructor
    Student();
    Student(std::string studentID, std::string firstName, std::string lastName, std::string email, int age, int daysInCourse[], DegreeProgram degreeProgram);


    //Getters

    std::string getStudentID()const;
    std::string getFirstName()const;
    std::string getLastName()const;
    std::string getEmail()const;
    int getAge()const;
    int getDaysInCourse()const;
    std::string getDegreeProgram()const;

    //Setters

    void setStudentID(std::string studentID);
    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setEmail(std::string email);
    void setAge(int age);
    void setDaysInCourse(int daysInCourse[]);
    void setDegreeProgram(DegreeProgram degreeProgram);

    //Additional functions

    void print();

private:

    std::string studentID;
    std::string firstName;
    std::string lastName;
    std::string email;
    int age;
    int daysInCourse[n];
    DegreeProgram degreeProgram;
};

#endif 
