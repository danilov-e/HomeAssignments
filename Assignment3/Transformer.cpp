include "Transformer.h"

class Transformer {
public:
  Transformer(uint level = 1, uint strength = 10, uint ammo = 100, uint health = 100) 
  : _level(level), _strength(strength), _ammo(ammo), _health(health), _gun(10, 100) {}

  uint Transformer::getLevel() {return _level;}
  void Transformer::setLevel(uint level) {_level = level;}
  uint Transformer::getStrength() {return _strength;}
  void Transformer::setStrength(uint strength) {_strength = strength;}
  uint Transformer::getAmmo() {return _ammo;}
  void Transformer::setAmmo(uint ammo) {_ammo = ammo;}
  uint Transformer::getHealth() {return _health;}
  void Transformer::setHealth(uint health) {_health = health;}

  bool Transformer::move() {
    return true;
  }

  bool Transformer::fire() {
    return true;
  }

  bool Transformer::jump() {
    return true;
  }

private:
  uint _level;
  uint _strength;
  uint _ammo;
  uint _health;
  Gun _gun;
}

int main() {
  Transformer t1(10, 2, 4125, 3464);
  t1.fire();
  Transformer t2(1021, 43632, 32523, 43124);
  t1.move();
  t2.move();
  t1.getHealth();
  t1.setHealth(5);
  t1.getHealth();
  return 0;
}


