class Transformer {
public:
  Transformer(uint level = 1, uint strength = 10, uint ammo = 100, uint health = 100) 
  : _level(level), _strength(strength), _ammo(ammo), _health(health) {}

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
}
