/*
 * Egor Danilov
 * st141853@student.spbu.ru
 * My home assignment 3
 */


#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon : public Transformer
{
public:
    Decepticon();
    Decepticon(Battlefield* battlefield, unsigned int level, unsigned int strength,
               unsigned int ammo, unsigned int health,
               unsigned int cunning, unsigned int stealthLevel);
    ~Decepticon();

    void specialAbility() override;
    void transform() override;


    unsigned int getCunning();
    void setCunning(unsigned int cunning);
    unsigned int getStealthLevel();
    void setStealthLevel(unsigned int stealthLevel);

    bool executeEvilPlan();

private:
    unsigned int _cunning;
    unsigned int _stealthLevel;
};

std::ostream& operator<<(std::ostream& os, Decepticon& decepticon);

#endif
