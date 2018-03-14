/*
virusLIB.h

User library for VIRUS purpose
Author  :: Jan Glos
Date    :: 8/03/2018
Place   :: Denmark, Aarhus

Class and Method definitions for virus app
*/
#include <iostream>
using namespace std;

class virus {

  float reproductionRate;    // rate of reproduction, in 0-1
  float resistance;          // resistance against drugs, in 0-1
  float defaultReproductionRate = 0.1;

public:
    virus(float newResistance);
    virus(float newReproductionRate, float newResistance);
    ~virus();

    bool survive(float live, float immunity);
};

class citizen {
  int age;
  char gender;
  char illness;
  char symptoms;
};

class doctor {
  int skills;
  int expirience;
  int availability;
};
