/*
 * Egor Danilov
 * st141853@student.spbu.ru
 * My home assignment 3
 */


#include "Decepticon.h"
Decepticon::Decepticon()
    : Transformer(new Battlefield(100, 100)),
      _cunning(50),
      _stealthLevel(30)
{}
Decepticon::Decepticon(Battlefield* battlefield, unsigned int level, unsigned int strength,
                       unsigned int ammo, unsigned int health, unsigned int cunning, unsigned int stealthLevel)
: Transformer(battlefield, level, strength, ammo, health), _cunning(cunning), _stealthLevel(stealthLevel) {}
Decepticon::~Decepticon() {}

void Decepticon::specialAbility() {
    std::cout << "Decepticon::specialAbility()" << std::endl;
}

void Decepticon::transform() {
    std::cout << "Decepticon::transform()" << std::endl;
}

unsigned int Decepticon::getCunning() { return _cunning; }
void Decepticon::setCunning(unsigned int cunning) { _cunning = cunning; }
unsigned int Decepticon::getStealthLevel() { return _stealthLevel; }
void Decepticon::setStealthLevel(unsigned int stealthLevel) { _stealthLevel = stealthLevel; }

bool Decepticon::executeEvilPlan() {
  return true;
}

std::ostream& operator<<(std::ostream& os, Decepticon& d) {
    os << "Decepticon:\n"
       << "  Level: " << d.getLevel() << "\n"
       << "  Strength: " << d.getStrength() << "\n"
       << "  Ammo: " << d.getAmmo() << "\n"
       << "  Health: " << d.getHealth() << "\n"
       << "  Gun Range: " << d.getGunRange() << "\n"
       << "  Gun Damage: " << d.getGunDamage() << "\n"
       << "  Battlefield: " << d.getBattlefieldLength() << " x " << d.getBattlefieldWidth() << "\n"
       << "  Cunning: " << d.getCunning() << "\n"
       << "  Stealth Level: " << d.getStealthLevel();
    return os;
}

