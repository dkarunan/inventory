#include <fstream>
#include <iostream>
#include <sstream>  // For std::stringstream
#include <vector>
#include "fileManager.h"
#include "applicationDriver.h"

#define ID_INDEX 0
#define NAME_INDEX 1
#define TYPE_INDEX 2
#define CONDITION_INDEX 3
#define LOCATION_INDEX 4
#define AVAILABILITY_INDEX 5

FileManager::FileManager(){}
FileManager::~FileManager(){}

void FileManager::saveToFile()
{
    bool yesNoFlag = true;
    std::string choice;
    while(yesNoFlag)
    {
        std::cout << "Are you sure to save to a file [Y | N] : ";
        std::cin >> choice;
        if(choice == "Y" || choice == "y")
        {
            yesNoFlag = false;
            std::ofstream outputFile("Inventory.txt");
            if(outputFile.is_open())
            {
                for (std::map<std::string, Equipment>::iterator it = ApplicationDriver::equipmentList.begin(); it != ApplicationDriver::equipmentList.end(); ++it) 
                {
                    outputFile << it->second.getId() << ","
                            << it->second.getName() << ","
                            << it->second.getType() << ","
                            << it->second.getCondition() << ","
                            << it->second.getLocation() << ","
                            << it->second.getAvailability() << "\n";
                }
                std::cout << "\nSuccessfully save to a file !!!\n" << std::endl;
            }
            else
            {
                std::cout << "File is not open" << std::endl;
            }
            outputFile.close();
        }
        else if(choice == "N" || choice == "n")
        {
            std::cout << "Data Not save to a file !!!"<<std::endl;
            yesNoFlag = false;
        }
        else
        {
            std::cout << "Invalid choice !!!" << std::endl;
        }
    }
    
}

void FileManager::loadFromTheFile()
{
    std::ifstream inputfile("Inventory.txt");
    std::string line;
    if(inputfile.is_open())
    {
        std::string id, name, type, condition, location, availability;
        while(std::getline(inputfile, line))
        {
            std::stringstream ss(line);
            std::string word;
            std::vector<std::string> words; 

            while (std::getline(ss, word, ','))
            {
                words.push_back(word);
            }
            id = words[ID_INDEX];
            name = words[NAME_INDEX];
            type = words[TYPE_INDEX];
            condition = words[CONDITION_INDEX];
            location = words[LOCATION_INDEX];
            availability = words[AVAILABILITY_INDEX];
            
            ApplicationDriver::equipmentList[id] = Equipment(id, name, type, condition, location, availability);
        }
    }
}