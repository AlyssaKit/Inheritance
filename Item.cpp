/**
* @brief Assignment 4
* @name Alyssa Kittle
*/
#include "Item.h"

Item:: Item(string itemName, int cost){
   name = itemName;
   value = cost;
}
string Item:: getName(){
   return name;
}
int Item:: getValue(){
   return value;
}
string Item:: toString(){
   string newString = "";
   newString.append(getName()).append(" (").append("value: ").append(to_string(getValue())).append(")");
   return newString;
}

