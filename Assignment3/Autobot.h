#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer {
public:
  Autobot(Battlefield* battlefield, unsigned int level = 1, unsigned int strength = 10, 
          unsigned int ammo = 100, unsigned int health = 100,
          unsigned int courage = 50, unsigned int teamBonus = 10);
  ~Autobot();  
  unsigned int getCourage();
  void setCourage(unsigned int courage);
  unsigned int getTeamBonus();
  void setTeamBonus(unsigned int teamBonus);
  
  bool inspireTeam();

private:
  unsigned int _courage;
  unsigned int _teamBonus;
};

#endif
