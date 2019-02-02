#include <string>
#include "Weapon.h"
#include <cmath>

#ifndef EXCALIBUR_H
#define EXCALIBUR_H

/*
   Legendary sword that increase damage base on 20% of armor
*/
class Excalibur : public Weapon {
public:

    Excalibur() : Weapon("Excalibur",100.0)
    {
    }

    virtual ~Excalibur() {};

    virtual double hit(double armor);

};

#endif /* EXCALIBUR_H */
