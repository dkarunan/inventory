#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <iostream>
#include <map>
#include <vector>
#include <string>

class Equipment
{
    private:
    std::string equipmentId;
    std::string equipmentName;
    std::string equipmentType;
    std::string condition;
    std::string location;
    std::string availability;

    public:
    Equipment();
    Equipment(std::string equipmentId1, std::string equipmentName1, std::string equipmentType1, std::string condition1, 
    std::string location1, std::string availability1);
    std::string getId() const { return equipmentId; }
    std::string getName() const { return equipmentName; }
    std::string getType() const { return equipmentType; }
    std::string getCondition() const { return condition; }
    std::string getLocation() const { return location; }
    std::string getAvailability() const { return availability; }

    //std::vector<Equipment> equipmentList;
    

};

#endif // EQUIPMENT_H