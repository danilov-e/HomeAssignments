#include "Gun.h"

int main() {
  Gun gun1(42, 52);
  gun1.upgrade();
  gun1.getDamage();
  gun1.setDamage(10);
  gun1.getDamage();
  return 0;
}

