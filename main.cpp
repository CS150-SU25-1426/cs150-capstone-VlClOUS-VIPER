#include "groceryItem.h"
#include "groceryList.h"
#include <limits>
#include <iostream>

int main() {

    GroceryList inventory;
    bool keepGoing = true;

    while (keepGoing == true) {
        int choice;
        std::cout << "Pick the number corresponding to what you want to do with the inventory: \n";
        std::cout << "1. Display the inventory\n";
        std::cout << "2. Add an item to the inventory\n";
        std::cout << "3. Replace an item in the inventory\n";
        std::cout << "4. Delete an item in the inventory\n";
        std::cout << "5. Exit\n";
        std::cin >> choice;
        std::cout << std::endl;

        switch (choice) {
            case 1: {
                //Display the inventory
                std::cout << inventory;
                break;
            }
            case 2: {
                //Add an item to the inventory
                int ID;
                std::string name;
                int amount;
                std::string date;

                std::cout << "Enter the item's ID: ";
                std::cin >> ID;
                std::cout << "Enter the item's name: ";
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::getline(std::cin, name);
                std::cout << "Enter the item's amount: ";
                std::cin >> amount;
                std::cout << "Enter the item's expiration date: ";
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::getline(std::cin, date);

                GroceryItem newItem(ID, name, amount, date);
                inventory.addItem(newItem);
                std::cout << "Item added!\n";
                break;     
            }
            case 3: {
                //Replace an item in the inventory
                int ID;
                std::string name;
                int amount;
                std::string date;

                std::cout << "Enter the ID of the item you want to replace: ";
                std::cin >> ID;
                std::cout << "Enter the item's new name: ";
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::getline(std::cin, name);
                std::cout << "Enter the item's new amount: ";
                std::cin >> amount;
                std::cout << "Enter the item's new expiration date: ";
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::getline(std::cin, date);

                GroceryItem replaceItem(ID, name, amount, date);
                inventory.editItem(replaceItem);
                std::cout << "Item replaced!\n";
                break;
            }
            case 4: {
                //Delete an item from the inventory
                int itemID;
                std::cout << "Enter the ID of the item you want to delete: ";
                std::cin >> itemID;
                inventory.deleteItem(itemID);
                std::cout << "Item deleted!\n";
                break;
            }
            case 5: {
                //Stop the loop...Exit
                keepGoing = false;
                break;
            }
            default: {
                //Error message
                std::cout << "Pick a number 1-5 inclusive!";
                break;
            }
        }

    }

    return 0;
}