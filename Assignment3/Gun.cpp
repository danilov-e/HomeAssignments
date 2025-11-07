#include "Gun.h"

Gun::Gun(unsigned int damage, unsigned int range)
: _damage(damage), _range(range) {}

unsigned int Gun::getDamage() {return _damage;}
void Gun::setDamage(unsigned int damage) {_damage=damage;}
unsigned int Gun::getRange() {return _range;}
void Gun::setRange(unsigned int range) {_range=range;}

bool Gun::upgrade() {
  return true;
}

bool Gun::enchant() {
  return true;
}

