#include "Student.h"

// Constructor implementation
Student::Student(std::string id, std::string n, std::string c, int y, std::string ci)
    : studentID(id), name(n), course(c), year(y), contactInfo(ci) {}

// Display method implementation
void Student::display()
{
    std::cout << "ID: " << studentID << ", Name: " << name << ", Course: " << course
              << ", Year: " << year << ", Contact: " << contactInfo << std::endl;
}
