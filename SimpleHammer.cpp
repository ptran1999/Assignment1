#include "SimpleHammer.h"

double SimpleHammer::hit(double armor){
    double damage;
    if(armor < 30) //ignore armor if it is below 30
    	damage = hitPoints; 
    else
	damage = hitPoints - armor;
    if(damage < 0){
        return 0;
    }
    return damage;
}
