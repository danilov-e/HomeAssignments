/*
 * Egor Danilov
 * st141853@student.spbu.ru
 * My home assignment 3
 */


#ifndef GUN_H
#define GUN_H
#include <iostream>

class Gun {
public:
  Gun(unsigned int damage = 100, unsigned int range = 50);
  ~Gun();
  unsigned int getDamage();
  void setDamage(unsigned int damage);
  unsigned int getRange();
  void setRange(unsigned int range);
  bool upgrade();
  bool enchant();
private:
  unsigned int _damage;
  unsigned int _range;
};

std::ostream& operator<<(std::ostream& os, Gun& gun);

#endif 
