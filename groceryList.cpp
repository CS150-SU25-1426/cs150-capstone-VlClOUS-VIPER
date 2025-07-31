#include "groceryList.h"

void GroceryList::addItem(const GroceryItem& item) {
    myList.push_back(item);
}

void GroceryList::deleteItem(int ID) {
    bool found = false;
    for (int i=0; i<myList.size(); i++) {
        if (myList[i].getItemID() == ID) {
            myList.erase(myList.begin() + i);
            found = true;
            break;
        }
    }
    if (found == false) {
        std::cout << "Error: Item not found from ID.\n";
    }
    else {
        std::cout << "Item successfully removed.\n";
    }
}

void GroceryList::editItem(const GroceryItem& item) {
    bool found = false;
    for (int i=0; i<myList.size(); i++) {
        if (myList[i].getItemID() == item.getItemID()) {
            myList[i] = item;
            found = true;
            break;
        }
    }
    if (found == false) {
        std::cout << "Error: Item not found from ID.\n";
    }
    else {
        std::cout << "Item successfully replaced.\n";
    }
}
std::ostream& operator<<(std::ostream& os, const GroceryList& list) {
    os << "Current inventory: \n";
    for (int i=0; i<list.myList.size(); i++) {
        os << list.myList[i] << std::endl;
    }
    return os;
}
bool GroceryList::operator==(const GroceryList& otherList) const {
    if (myList == otherList.myList) {
        return true;
    }
    return false;
}