#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include "Gun.h"
#include "Battlefield.h"

class Transformer {
public:
  Transformer(Battlefield* battlefield, unsigned int level = 1, unsigned int strength = 10, unsigned int ammo = 100, unsigned int health = 100);
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
#endif

