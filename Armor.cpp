/**
* @brief Assignment 4
* @name Alyssa Kittle
*/
#include "Armor.h"

Armor:: Armor(string itemName, int protectionValue, int cost): Item(itemName, cost){
   protection = protectionValue;
}
string Armor:: toString(){
   string newString = Item::toString().append(" Protection: ").append(to_string(protection));
   return newString;
}
int Armor:: getProtection(){
   return protection;
}

