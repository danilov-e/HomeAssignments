#include "Transformer.h"
#include <iostream>

int main() {
  Battlefield b1(100, 125);
  std::cout << b1.getWidth() << std::endl;
  b1.setWidth(104633460);
  std::cout << b1.getWidth() << std::endl;
  return 0;
}

