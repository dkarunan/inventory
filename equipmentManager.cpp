#include "equipmentManager.h"
#include "equipment.h"
#include "applicationDriver.h"
#include <iomanip>

EquipmentManager::EquipmentManager()
{
   
};

EquipmentManager::~EquipmentManager()
{

}

void EquipmentManager::addEquipmnet()
{
    std::string id, name, type, condition, location, availability;

    std::cout << "Enter Equipment ID           : ";
    std::cin >> id ;
    std::cout << "Enter Equipment Name         : ";
    std::cin >> name;
    std::cout << "Enter Equipment Type         : ";
    std::cin >> type;
    std::cout << "Enter Equipment Conition     : ";
    std::cin >> condition;
    std::cout << "Enter Equipment Location     : ";
    std::cin >> location;
    std::cout << "Enter Equipment Availability : ";
    std::cin >> availability;
    
    std::cout << "Do you want to save the record [Y | N] : ";
    std::string yesNoFlag;
    std::cin >> yesNoFlag;
    bool loop = true;
    while(loop)
    {
        if(yesNoFlag == "Y" || yesNoFlag == "y")
        {
            ApplicationDriver::equipmentList[id] = Equipment(id, name, type, condition, location, availability);
            loop = false;
            std::cout << "Record successfully saved\n" << std::endl;
        }
        else if(yesNoFlag == "N" || yesNoFlag == "n")
        {
            std::cout << "Record not saved\n" << std::endl;
            loop = false;
        }
        else
        {
            std::cout << "invalid choice" << std::endl;
        }
    }
  
}

void EquipmentManager::displayEquipment()
{   
    if(ApplicationDriver::equipmentList.size() == 0)
    {
        std::cout << "No Equipment Available\n";
    }
    else
    {
        std::cout << std::left;
        std::cout << std::setw(20) << "| Equipment ID" <<
                    std::setw(20) << "| Equipment Name" <<
                    std::setw(20) << "| Equipment Type" <<
                    std::setw(20) << "| Equipment Condition" <<
                    std::setw(20) << "| Equipment Location" <<
                    std::setw(20) << "| Equipment Availability |" << std::endl;

    }

    for (std::map<std::string, Equipment>::iterator it = ApplicationDriver::equipmentList.begin(); it != ApplicationDriver::equipmentList.end(); ++it) 
    {
        std::cout << std::left;
        std::cout <<"| " << std::setw(18) <<  it->second.getId() << "| " 
                  << std::setw(18) <<  it->second.getName() << "| " 
                  << std::setw(18) <<  it->second.getType() << "| "
                  << std::setw(19) <<  it->second.getCondition() << "| "
                  << std::setw(18) <<  it->second.getLocation() << "| "
                  << std::setw(18) <<  it->second.getAvailability() << "     |" <<"\n";
    }
    
    
}

void EquipmentManager::checkAvailability()
{
    std::string equipmenrId;
    std::cout << "Enter Equipment ID : ";
    std::cin >> equipmenrId;

    auto it = ApplicationDriver::equipmentList.find(equipmenrId);
    if (it != ApplicationDriver::equipmentList.end()) 
    {
        std::cout << "Equipment ID           : " <<  it->second.getId() <<"\n";
        std::cout << "Equipment Name         : " <<  it->second.getName() <<"\n";
        std::cout << "Equipment Type         : " <<  it->second.getType() <<"\n";
        std::cout << "Equipment Condition    : " <<  it->second.getCondition() <<"\n";
        std::cout << "Equipment Location     : " <<  it->second.getLocation() <<"\n";
        std::cout << "Equipment Availability : " <<  it->second.getAvailability() <<"\n";
    }
    else
    {
        std::cout << "Equipment with ID " << equipmenrId << " not found.\n";
    }

}

void EquipmentManager::saveToFile()
{

}