#include <string>
#include "Weapon.h"
#include <cstdlib>


#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a random sword (7 <= hp <= 100, 2 <= ignore armor_hp <= armor_hp/3)
 */
class CrazyRandomSword : public Weapon {
public:
    CrazyRandomSword() : Weapon("CrazyRandomSword", rand()%(100-7+1) + 7)
    {
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */
