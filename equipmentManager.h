#ifndef EQUIPMENTMANAGER_H
#define EQUIPMENTMANAGER_H

#include <iostream>
#include <map>
#include <string>
#include "equipment.h"

class Equipment;
class EquipmentManager 
{

    public:
    EquipmentManager();
    virtual ~EquipmentManager();
    void displayEquipment();
    void checkAvailability();
    void updateCondition(std::string euipmentID);
    void updateLocation(std::string euipmentID);
    void addEquipmnet();
    void saveToFile();


};

#endif // EQUIPMENTMANAGER_H