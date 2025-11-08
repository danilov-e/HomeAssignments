#include "Battlefield.h"

Battlefield::Battlefield(unsigned int length, unsigned int width)
: _length(length), _width(width) {}
Battlefield::~Battlefield() {}

unsigned int Battlefield::getLength() {return _length;}
void Battlefield::setLength(unsigned int length) {_length=length;}
unsigned int Battlefield::getWidth() {return _width;}
void Battlefield::setWidth(unsigned int width) {_width=width;}

