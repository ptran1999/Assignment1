#include "Excalibur.h"

double Excalibur::hit(double armor){
    double damage = (hitPoints + armor*0.2) - armor; //increase damage according to 20% of armor
    if(damage < 0){
        return 0;
    }
    return floor(damage);
}
