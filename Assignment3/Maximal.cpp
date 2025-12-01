/*
 * Egor Danilov
 * st141853@student.spbu.ru
 * My home assignment 3
 */


#include "Maximal.h"

Maximal::Maximal(Battlefield* battlefield, unsigned int level, unsigned int strength,
                 unsigned int ammo, unsigned int health, unsigned int techAffinity, unsigned int transformationSpeed)
    : Transformer(battlefield, level, strength, ammo, health), _techAffinity(techAffinity), _transformationSpeed(transformationSpeed) {}
Maximal::~Maximal() {}
unsigned int Maximal::getTechAffinity() { return _techAffinity; }
void Maximal::setTechAffinity(unsigned int techAffinity) { _techAffinity = techAffinity; }
unsigned int Maximal::getTransformationSpeed() { return _transformationSpeed; }
void Maximal::setTransformationSpeed(unsigned int transformationSpeed) { _transformationSpeed = transformationSpeed; }

bool Maximal::transformToBeastMode() {
  return true;
}

std::ostream& operator<<(std::ostream& os, Maximal& m) {
    os << "Maximal:\n"
       << "  Level: " << m.getLevel() << "\n"
       << "  Strength: " << m.getStrength() << "\n"
       << "  Ammo: " << m.getAmmo() << "\n"
       << "  Health: " << m.getHealth() << "\n"
       << "  Gun Range: " << m.getGunRange() << "\n"
       << "  Gun Damage: " << m.getGunDamage() << "\n"
       << "  Battlefield: " << m.getBattlefieldLength() << " x " << m.getBattlefieldWidth() << "\n"
       << "  Tech Affinity: " << m.getTechAffinity() << "\n"
       << "  Transformation Speed: " << m.getTransformationSpeed();
    return os;
}
