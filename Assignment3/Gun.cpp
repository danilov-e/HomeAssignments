class Gun {
public:
  Gun(uint damage = 10, uint range = 50)
  : _damage(damage), _range(range) {}

  uint Gun::getDamage() {return _damage;}
  bool Gun::setDamage(uint damage) {_damage=damage;}
  uint Gun::getRange() {return _range;}
  bool Gun::setRange(uint range) {_range=range;}

  bool Gun::upgrade() {
    return true;
  }

  bool Gun::enchant() {
    return true;
  }

private:
  uint _damage;
  uint _range;
}
