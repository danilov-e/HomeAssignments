/*
 * Egor Danilov
 * st141853@student.spbu.ru
 * My home assignment 3
 */


#include "Decepticon.h"

Decepticon::Decepticon(Battlefield* battlefield, unsigned int level, unsigned int strength,
                       unsigned int ammo, unsigned int health, unsigned int cunning, unsigned int stealthLevel)
: Transformer(battlefield, level, strength, ammo, health), _cunning(cunning), _stealthLevel(stealthLevel) {}
Decepticon::~Decepticon() {}

unsigned int Decepticon::getCunning() { return _cunning; }
void Decepticon::setCunning(unsigned int cunning) { _cunning = cunning; }
unsigned int Decepticon::getStealthLevel() { return _stealthLevel; }
void Decepticon::setStealthLevel(unsigned int stealthLevel) { _stealthLevel = stealthLevel; }

bool Decepticon::executeEvilPlan() {
  return true;
}
