#ifndef APPLICATIONDRIVER_H
#define APPLICATIONDRIVER_H

#include <iostream>
#include <string>
#include "student.h"
#include "equipment.h"
#include "equipmentManager.h"

class ApplicationDriver
{
    private:
    void menu();

    bool endOfAppication = false;


    public:
    ApplicationDriver();
    ~ApplicationDriver();
    void runMenue();

    static std::map<std::string, Equipment> equipmentList;
    

};

#endif // APPLICATIONDRIVER_H