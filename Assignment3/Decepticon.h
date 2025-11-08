#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon : public Transformer {
public:
  Decepticon(Battlefield* battlefield, unsigned int level = 1, unsigned int strength = 10,
             unsigned int ammo = 100, unsigned int health = 100,
             unsigned int cunning = 50, unsigned int stealthLevel = 30);
  ~Decepticon();  
  unsigned int getCunning();
  void setCunning(unsigned int cunning);
  unsigned int getStealthLevel();
  void setStealthLevel(unsigned int stealthLevel);
  
  bool executeEvilPlan();

private:
  unsigned int _cunning;
  unsigned int _stealthLevel;
};

#endif
