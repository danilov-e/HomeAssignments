#ifndef GUN_H
#define GUN_H

class Gun {
public:
  Gun(unsigned int damage = 100, unsigned int range = 50);
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
#endif 
