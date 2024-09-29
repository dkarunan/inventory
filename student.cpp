#include "Student.h"
#include <iomanip>

Student::Student(std::string id, std::string name, std::string cource, int year, std::string contactInfo)
    : studentID(id), name(name), course(cource), year(year), contactInfo(contactInfo) {}

// Display student details
void Student::displayStudentDetails()
{
    std::cout <<"\n######  STUDENT DETAILS  #####\n\n"
              << std::left <<std::setw(8)<<"ID" << ": " << studentID <<std::endl
              << std::left <<std::setw(8)<<"Name" << ": " << name << std::endl
              << std::left <<std::setw(8)<<"Course" << ": " << course << std::endl
              << std::left <<std::setw(8)<<"Year" << ": " << year << std::endl
              << std::left <<std::setw(8)<<"Contact" << ": " << contactInfo << std::endl
              <<"\n##############################\n\n";
}

void requestEquipment(std::string equipmentID)
{
    
}

void returnEquipment(std::string equipmentID)
{

}
