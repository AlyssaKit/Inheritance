/**
* @brief Assignment 4
* @name Alyssa Kittle
*/
#include "RangedWeapon.h"

RangedWeapon:: RangedWeapon(string itemName, int damageValue, int rangeValue, int ammoValue, int cost): Weapon(itemName, damageValue, cost){
   range = rangeValue;
   ammo = ammoValue;
}
string RangedWeapon:: toString(){
   string newString = Weapon::toString().append(" Ammo: ").append(to_string(getAmmo())).append(" Range: ").append(to_string(range));
   return newString;
}
int RangedWeapon:: getRange(){
   return range;
}
int RangedWeapon:: getAmmo(){
   return ammo;
}
int RangedWeapon:: use(int rangeToTarget){
   if(ammo > 0){
       ammo--;
       if(range >= rangeToTarget){
           return getDamage();
       } else{
           return 0;
       }
   } else{
       return 0;
   }
}
