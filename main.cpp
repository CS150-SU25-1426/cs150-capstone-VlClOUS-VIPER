#include "groceryItem.h"

int main() {
    GroceryItem item1(10001, "Milk Carton", 4, "04/29/2030");
    GroceryItem item2;
    item2.setItemID(10002);
    item2.setItemName("Broccoli");
    item2.setItemAmount(57);
    item2.setExpirationDate("08/17/2029");

    GroceryItem item3(10003, "Broccoli", 57, "08/17/2029");

    std::cout << "Item 1: \n" << item1 << std::endl;
    std::cout << "Item 2: \n" << item2 << std::endl;
    std::cout << "Item 3: \n" << item3 << std::endl;

    if (item1 == item2) {
        std::cout << "Item 1 and Item 2 have the same contents...make sure you didn't check the same item twice!\n";
    }
    else {
        std::cout << "Item 1 and Item 2 are not the same\n";
    }
    if (item2 == item3) {
        std::cout << "Item 2 and Item 3 have the same contents...make sure you didn't check the same item twice!\n";
    }
    else {
        std::cout << "Item 2 and Item 3 are not the same\n";
    }
    return 0;
}