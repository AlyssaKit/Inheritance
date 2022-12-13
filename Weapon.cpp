/**
* @brief Assignment 4
* @name Alyssa Kittle
*/
#include "Weapon.h"

Weapon:: Weapon(string itemName, int damageValue, int cost): Item(itemName, cost){
   damage = damageValue;
}
string Weapon:: toString(){
   string newString = Item::toString().append(" Damage: ").append(to_string(damage));
   return newString;
}
int Weapon:: getDamage(){
   return damage;
}
int Weapon:: getRange(){
   return 0;
}

int Weapon:: use(int rangeToTarget){
   if(rangeToTarget == 0){
       return getDamage();
   } else{
       return 0;
   }
}


