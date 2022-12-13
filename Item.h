/**
* @brief Assignment 4
* @name Alyssa Kittle
*/
#ifndef ITEM_H
#define ITEM_H
#include <iostream>
using namespace std;

class Item {
private:
   string name;
   int value;
public:
   Item(string itemName, int cost);
   string getName();
   int getValue();
   virtual string toString();
};


#endif // ITEM_H

