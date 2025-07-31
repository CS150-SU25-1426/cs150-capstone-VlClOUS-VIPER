#include <vector>
#include "groceryItem.h"
#include <iostream>

class GroceryList {
    private:
        std::vector<GroceryItem> myList;
    public:
        void addItem(const GroceryItem& item);
        void deleteItem(int ID);
        void editItem(const GroceryItem& item);

        friend std::ostream& operator<<(std::ostream& os, const GroceryList& list);
        bool operator==(const GroceryList& otherList) const;
};