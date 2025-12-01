/*
 * Egor Danilov
 * st141853@student.spbu.ru
 * My home assignment 3
 */


#include "Autobot.h"

Autobot::Autobot()
    : Transformer(new Battlefield(100, 100)),
      _courage(50),
      _teamBonus(10) {}

Autobot::Autobot(Battlefield* battlefield, unsigned int level, unsigned int strength,
                 unsigned int ammo, unsigned int health, unsigned int courage, unsigned int teamBonus)
: Transformer(battlefield, level, strength, ammo, health), _courage(courage), _teamBonus(teamBonus) {}
Autobot::~Autobot() {}

void Autobot::specialAbility() {
    std::cout << "Autobot::specialAbility()" << std::endl;
}

void Autobot::transform() {
    std::cout << "Autobot::transform()" << std::endl;
}

unsigned int Autobot::getCourage() { return _courage; }
void Autobot::setCourage(unsigned int courage) { _courage = courage; }
unsigned int Autobot::getTeamBonus() { return _teamBonus; }
void Autobot::setTeamBonus(unsigned int teamBonus) { _teamBonus = teamBonus; }

bool Autobot::inspireTeam() {
  return true;
}

std::ostream& operator<<(std::ostream& os, Autobot& a) {
    os << "Autobot:\n"
       << "  Level: " << a.getLevel() << "\n"
       << "  Strength: " << a.getStrength() << "\n"
       << "  Ammo: " << a.getAmmo() << "\n"
       << "  Health: " << a.getHealth() << "\n"
       << "  Gun Range: " << a.getGunRange() << "\n"
       << "  Gun Damage: " << a.getGunDamage() << "\n"
       << "  Battlefield: " << a.getBattlefieldLength() << " x " << a.getBattlefieldWidth() << "\n"
       << "  Courage: " << a.getCourage() << "\n"
       << "  Team Bonus: " << a.getTeamBonus();
    return os;
}
