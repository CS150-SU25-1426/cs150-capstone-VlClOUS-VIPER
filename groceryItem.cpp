#include "groceryItem.h" 

GroceryItem::GroceryItem(int itemID, std::string itemName, int itemAmount, std::string expirationDate) 
    : itemID(itemID), itemName(itemName), itemAmount(itemAmount), expirationDate(expirationDate) {}

GroceryItem::GroceryItem()
    : itemID(0), itemName(""), itemAmount(0), expirationDate("") {}
int GroceryItem::getItemID() const {
    return itemID;
}
std::string GroceryItem::getItemName() const {
    return itemName;
}
int GroceryItem::getItemAmount() const {
    return itemAmount;
}
std::string GroceryItem::getExpirationDate() const {
    return expirationDate;
}

void GroceryItem::setItemID(int ID) {
    itemID = ID;
}
void GroceryItem::setItemName(std::string name) {
    itemName = name;
}
void GroceryItem::setItemAmount(int amount) {
    itemAmount = amount;
}
void GroceryItem::setExpirationDate(std::string date) {
    expirationDate = date;
}

std::ostream& operator<<(std::ostream& os, const GroceryItem& item) {
    os << "Item: " << item.itemName << " ID: " << item.itemID << " Amount: " << item.itemAmount << " Expiration Date: " << item.expirationDate;
    return os;
}
bool GroceryItem::operator==(const GroceryItem& otherItem) const {
    if ((itemName == otherItem.itemName) && (itemAmount == otherItem.itemAmount) && (expirationDate == otherItem.expirationDate)) {
        return true;
    }
    return false;
    //checks if everything is the same except for the ID...seems more useful that way
} 