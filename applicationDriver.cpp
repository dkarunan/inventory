#include "applicationDriver.h"
#include "equipment.h"
#include "fileManager.h"

#define VIEWE_EQUIPMENT "1"
#define ADD_EQUIPMENT "2"
#define SEARCH_EQUIPMENT "3"
#define REQUEST_EQUIPMENT "4"
#define RETURN_EQUIPMENT "5"
#define SAVE_TO_FILE "6"
#define QUIT "7"

ApplicationDriver::ApplicationDriver()
{

}

std::map<std::string, Equipment> ApplicationDriver::equipmentList;

ApplicationDriver::~ApplicationDriver()
{

}

void ApplicationDriver::runMenue()
{
    FileManager filemanager;
    filemanager.loadFromTheFile();

    while(endOfAppication != true)
    {
        menu();
    }
}

void ApplicationDriver::menu()
{
    FileManager filemanager;

    std::cout << "\n#####  Inventory Management System  #####\n\n"
              << "1. View equipment\n"
              << "2. Add equipment\n"
              << "3. Search Equipment\n"
              << "4. Request Equipment\n"
              << "5. Return Equipment\n"
              << "6. Save to file\n"
              << "7. Quit"<< std::endl;

    std:: string choice;
    std::cout << "Enter Your Choice : ";
    std::cin >> choice;
    std::cout << "\n";
    
    while(choice != VIEWE_EQUIPMENT && choice != SEARCH_EQUIPMENT && choice != REQUEST_EQUIPMENT && 
          choice != RETURN_EQUIPMENT && choice != QUIT && choice != ADD_EQUIPMENT && choice != SAVE_TO_FILE)
    {
        std::cout <<"Invalid Choice Enter Again\n"
                  <<"Enter Your Choice : ";
        std::cin >> choice;
    }

    EquipmentManager eqManagerObj;
    
    if(choice == VIEWE_EQUIPMENT)
    {
        eqManagerObj.displayEquipment();
    }
    else if(choice == ADD_EQUIPMENT)
    {
        eqManagerObj.addEquipmnet();
    }
    else if(choice == SEARCH_EQUIPMENT)
    {
        eqManagerObj.checkAvailability();
    }
    else if(choice == SAVE_TO_FILE)
    {

        filemanager.saveToFile();
    }
    else if(choice == QUIT)
    {
        std::cout << "Application Scucessfully Quit\n";
        endOfAppication = true;

    }
}
