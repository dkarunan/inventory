#include "equipment.h"

Equipment::Equipment():equipmentId("equipmentId"), equipmentName("equipmentName"), equipmentType("equipmentType"),
    condition("condition"), location("location"), availability("availability"){}


Equipment::Equipment(std::string equipmentId1, std::string equipmentName1, std::string equipmentType1, std::string condition1, 
    std::string location1, std::string availability1)
    {
        equipmentId = equipmentId1;
        equipmentName = equipmentName1;
        equipmentType = equipmentType1;
        condition = condition1;
        location = location1;
        availability = availability1;
    }


