/*
 * Egor Danilov
 * st141853@student.spbu.ru
 * My home assignment 3
 */


#ifndef BATTLEFIELD_H
#define BATTLEFIELD_H
#include <iostream>

class Battlefield
{
public:
    Battlefield();
    Battlefield(unsigned int length, unsigned int width);
    ~Battlefield();
    virtual void deployObstacles();
    virtual void describe();
    unsigned int getLength();
    void setLength(unsigned int);
    unsigned int getWidth();
    void setWidth(unsigned int);
private:
    unsigned int _length;
    unsigned int _width;
};

std::ostream& operator<<(std::ostream& os, Battlefield& battlefield);

#endif
