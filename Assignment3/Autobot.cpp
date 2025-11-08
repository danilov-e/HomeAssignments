#include "Autobot.h"

Autobot::Autobot(Battlefield* battlefield, unsigned int level, unsigned int strength,
                 unsigned int ammo, unsigned int health, unsigned int courage, unsigned int teamBonus)
: Transformer(battlefield, level, strength, ammo, health), _courage(courage), _teamBonus(teamBonus) {}
Autobot::~Autobot() {}
unsigned int Autobot::getCourage() { return _courage; }
void Autobot::setCourage(unsigned int courage) { _courage = courage; }
unsigned int Autobot::getTeamBonus() { return _teamBonus; }
void Autobot::setTeamBonus(unsigned int teamBonus) { _teamBonus = teamBonus; }

bool Autobot::inspireTeam() {
  return true;
}
