/*
 * Egor Danilov
 * st141853@student.spbu.ru
 * My home assignment 3
 */


#include "Gun.h"

Gun::Gun() : _damage(100), _range(50) {}

Gun::Gun(unsigned int damage, unsigned int range)
    : _damage(damage), _range(range) {}

Gun::~Gun() {}

void Gun::reload()
{
    std::cout << "Gun::reload()" << std::endl;
}

void Gun::drop()
{
    std::cout << "Gun::drop()" << std::endl;
}


unsigned int Gun::getDamage()
{
    return _damage;
}
void Gun::setDamage(unsigned int damage)
{
    _damage=damage;
}
unsigned int Gun::getRange()
{
    return _range;
}
void Gun::setRange(unsigned int range)
{
    _range=range;
}

bool Gun::upgrade()
{
    return true;
}

bool Gun::enchant()
{
    return true;
}

std::ostream& operator<<(std::ostream& os, Gun& g)
{
    os << "Gun:\n"
       << "  Damage: " << g.getDamage() << "\n"
       << "  Range: " << g.getRange() << "\n";
    return os;
}


