/**
* @brief Assignment 4
* @name Alyssa Kittle
*/
#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"

class Weapon: public Item {
private:
   int damage;
public:
   Weapon(string itemName, int damageValue, int cost);
   string toString();
   int getDamage();
   virtual int getRange();
   virtual int use(int rangeToTarget);
};


#endif // WEAPON_H
