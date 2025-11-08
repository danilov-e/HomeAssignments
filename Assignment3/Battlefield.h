/*
 * Egor Danilov
 * st141853@student.spbu.ru
 * My home assignment 3
 */


#ifndef BATTLEFIELD_H
#define BATTLEFIELD_H

class Battlefield {
public:
  Battlefield(unsigned int length = 1000, unsigned int width = 1000);
  ~Battlefield();
  unsigned int getLength();
  void setLength(unsigned int);
  unsigned int getWidth();
  void setWidth(unsigned int);
private:
  unsigned int _length;
  unsigned int _width;
};
#endif
