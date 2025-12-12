/*
 * Egor Danilov
 * st141853@student.spbu.ru
 * My home assignment 3
 */


#ifndef MAXIMAL_H
#define MAXIMAL_H

#include "Transformer.h"

class Maximal : public Transformer
{
public:
    Maximal();
    Maximal(Battlefield* battlefield, unsigned int level, unsigned int strength,
            unsigned int ammo, unsigned int health,
            unsigned int techAffinity, unsigned int transformationSpeed);
    ~Maximal();

    void specialAbility() override;
    void transform() override;

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
