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

        Student(std::string id, std::string name, std::string cource, int year, std::string contactInfo);
        void displayStudentDetails();
        void requestEquipment(std::string equipmentID);
        void returnEquipment(std::string equipmentID);
    private:
};

#endif // STUDENT_H
