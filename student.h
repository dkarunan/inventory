#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student 
{
    public:
        std::string studentID;
        std::string name;
        std::string course;
        int year;
        std::string contactInfo;

        Student(std::string id, std::string n, std::string c, int y, std::string ci);

        void display();
    private:
};

#endif // STUDENT_H
