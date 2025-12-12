/*
 * Egor Danilov
 * st141853@student.spbu.ru
 * My home assignment 3
 */


#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer
{
public:
    Autobot();
    Autobot(Battlefield* battlefield, unsigned int level, unsigned int strength,
            unsigned int ammo, unsigned int health,
            unsigned int courage, unsigned int teamBonus);
    ~Autobot();

    void specialAbility() override;
    void transform() override;


    unsigned int getCourage();
    void setCourage(unsigned int courage);
    unsigned int getTeamBonus();
    void setTeamBonus(unsigned int teamBonus);

    bool inspireTeam();

private:
    unsigned int _courage;
    unsigned int _teamBonus;
};

std::ostream& operator<<(std::ostream& os, Autobot& autobot);


#endif
