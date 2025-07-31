#ifndef GROCERYITEM_H
#define GROCERYITEM_H

#include <string>
#include <iostream>

class GroceryItem {
    private:
        int itemID;
        std::string itemName;
        int itemAmount;
        std::string expirationDate;

        // itemID is unique to that collection of items 
        // so that if you had multiple of the same item with different expiration dates
        // then you could make another object for that

    public:
        GroceryItem(int itemID, std::string itemName, int itemAmount, std::string expirationDate);
        GroceryItem();  
        int getItemID() const;
        std::string getItemName() const;
        int getItemAmount() const;
        std::string getExpirationDate() const;

        void setItemID(int ID);
        void setItemName(std::string name);
        void setItemAmount(int amount);
        void setExpirationDate(std::string date);

        friend std::ostream& operator<<(std::ostream& os, const GroceryItem& item);
        bool operator==(const GroceryItem& otherItem) const;
};

#endif 