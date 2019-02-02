#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor){
    int armor_ign = rand()% int( (armor/3)-2 + 1) + 2; //random of ignore armor point
    double damage = hitPoints - (armor - armor_ign);
    if(damage < 0){
        return 0;
    }
    return damage;
}
