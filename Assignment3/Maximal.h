/*
 * Egor Danilov
 * st141853@student.spbu.ru
 * My home assignment 3
 */


#ifndef MAXIMAL_H
#define MAXIMAL_H

#include "Transformer.h"

class Maximal : public Transformer {
public:
  Maximal(Battlefield* battlefield, unsigned int level = 1, unsigned int strength = 10,
          unsigned int ammo = 100, unsigned int health = 100,
          unsigned int techAffinity = 50, unsigned int transformationSpeed = 80);
  ~Maximal();  
  unsigned int getTechAffinity();
  void setTechAffinity(unsigned int techAffinity);
  unsigned int getTransformationSpeed();
  void setTransformationSpeed(unsigned int transformationSpeed);
  
  bool transformToBeastMode();

private:
  unsigned int _techAffinity;
  unsigned int _transformationSpeed;
};

std::ostream& operator<<(std::ostream& os, Maximal& maximal);

#endif
