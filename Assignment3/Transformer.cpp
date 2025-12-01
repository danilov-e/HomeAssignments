/*
 * Egor Danilov
 * st141853@student.spbu.ru
 * My home assignment 3
 */


#include "Transformer.h"
Transformer::Transformer()
    : _battlefield(new Battlefield(100, 100)), _level(1), _strength(10), _ammo(100), _health(100), _gun(10, 500) {}

Transformer::Transformer(Battlefield* battlefield, unsigned int level, unsigned int strength, unsigned int ammo, unsigned int health)
    : _battlefield(battlefield), _level(level), _strength(strength), _ammo(ammo), _health(health), _gun(10, 500) {}
Transformer::~Transformer() {}

unsigned int Transformer::getLevel()
{
    return _level;
}
void Transformer::setLevel(unsigned int level)
{
    _level = level;
}
unsigned int Transformer::getStrength()
{
    return _strength;
}
void Transformer::setStrength(unsigned int strength)
{
    _strength = strength;
}
unsigned int Transformer::getAmmo()
{
    return _ammo;
}
void Transformer::setAmmo(unsigned int ammo)
{
    _ammo = ammo;
}
unsigned int Transformer::getHealth()
{
    return _health;
}
void Transformer::setHealth(unsigned int health)
{
    _health = health;
}
unsigned int Transformer::getGunRange()
{
    return _gun.getRange();
}
void Transformer::setGunRange(unsigned int range)
{
    _gun.setRange(range);
}
unsigned int Transformer::getBattlefieldLength()
{
    return _battlefield->getLength();
}
void Transformer::setBattlefieldLength(unsigned int length)
{
    _battlefield->setLength(length);
}
unsigned int Transformer::getBattlefieldWidth()
{
    return _battlefield->getWidth();
}
void Transformer::setBattlefieldWidth(unsigned int width)
{
    _battlefield->setWidth(width);
}
unsigned int Transformer::getGunDamage()
{
    return _gun.getDamage();
}
void Transformer::setGunDamage(unsigned int damage)
{
    _gun.setDamage(damage);
}

bool Transformer::move()
{
    return true;
}

bool Transformer::fire()
{
    return true;
}

bool Transformer::jump()
{
    return true;
}

std::ostream& operator<<(std::ostream& os, Transformer& t)
{
    os << "Transformer:\n"
       << "  Level: " << t.getLevel() << "\n"
       << "  Strength: " << t.getStrength() << "\n"
       << "  Ammo: " << t.getAmmo() << "\n"
       << "  Health: " << t.getHealth() << "\n"
       << "  Gun Range: " << t.getGunRange() << "\n"
       << "  Gun Damage: " << t.getGunDamage() << "\n"
       << "  Battlefield: " << t.getBattlefieldLength() << " x " << t.getBattlefieldWidth();
    return os;
}
