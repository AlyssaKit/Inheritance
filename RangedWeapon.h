/**
* @brief Assignment 4
* @name Alyssa Kittle
*/
#ifndef RANGEDWEAPON_H
#define RANGEDWEAPON_H

#include "Weapon.h"

class RangedWeapon: public Weapon {
private:
   int range;
   int ammo;
public:
   RangedWeapon(string itemName, int damageValue, int rangeValue, int ammoValue, int cost);
   string toString();
   int getRange();
   int getAmmo();
   int use(int rangeToTarget);
};


#endif // RANGEDWEAPON_H
