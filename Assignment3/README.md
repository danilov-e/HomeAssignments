# Assignment 2b
## Author
Данилов Егор. 25.Б81-мм
## Contacts
st141853@student.spbu.ru
## Description
Home assignment 3. A C++ object-oriented programming project implementing an inheritance hierarchy of Transformers characters with composition and association relationships.
## Class Structure
Base Class: Transformer
Fields: level, strength, ammo, health, gun (composition), battlefield (association)

Methods: move(), fire(), jump()

Relationships:

Composition: Gun _gun - each Transformer owns a weapon

Association: Battlefield* _battlefield - Transformers operate on a battlefield

Supporting Classes:
Gun: Weapon with damage and range attributes

Battlefield: Combat environment with dimensions

Derived Classes:
Autobot - Courageous heroes

Additional fields: courage, teamBonus

Method: inspireTeam()

Maximal - Techno-organic beings

Additional fields: techAffinity, transformationSpeed

Method: transformToBeastMode()

Decepticon - Cunning villains

Additional fields: cunning, stealthLevel

Method: executeEvilPlan()
## Build
make
## Run
./transformers_test
## Clean
make clean
## Clean all
make cleanall
