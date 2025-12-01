/*
 * Egor Danilov
 * st141853@student.spbu.ru
 * My home assignment 3
 */

#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include "Gun.h"
#include "Battlefield.h"
#include <iostream>
class Transformer {
public:
  Transformer(Battlefield* battlefield, unsigned int level = 1, unsigned int strength = 10, unsigned int ammo = 100, unsigned int health = 100);
  ~Transformer();

  virtual void specialAbility() = 0;

  virtual void transform() {
    std::cout << "Transformer::transform()" << std::endl;
  }

  unsigned int getLevel();
  void setLevel(unsigned int level);
  unsigned int getStrength();
  void setStrength(unsigned int strength);
  unsigned int getAmmo();
  void setAmmo(unsigned int ammo);
  unsigned int getHealth();
  void setHealth(unsigned int health);
  unsigned int getGunRange();
  void setGunRange(unsigned int);
  unsigned int getGunDamage();
  void setGunDamage(unsigned int);
  unsigned int getBattlefieldLength();
  void setBattlefieldLength(unsigned int);
  unsigned int getBattlefieldWidth();
  void setBattlefieldWidth(unsigned int);


  bool move();
  bool fire();
  bool jump();

private:
  unsigned int _level;
  unsigned int _strength;
  unsigned int _ammo;
  unsigned int _health;
  Gun _gun;
  Battlefield* _battlefield;
};

std::ostream& operator<<(std::ostream& os, Transformer& transformer);

#endif

