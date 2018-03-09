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

  float reproductionRate;    // rate of reproduction, in %
  float resistance;          // resistance against drugs, in %
  static const float defaultReproductionRate = 0.1;

public:
    Virus(float newResistance);
    Virus(float newReproductionRate, float newResistance);
    ~Virus();
    Virus* reproduce(float immunity);
    bool survive(float immunity);
};

virus::Virus (float newResistance){
   cout << "Object VIRUS is being created,\nResistance = " << newResistance << "\nReproduction rate default = "<< defaultReproductionRate << endl;
   resistance = newResistance;
   reproductionRate = dafaultReproductionRate;
}

virus::Virus (float newReproductionRate, float newResistance){
   cout << "Object VIRUS is being created,\nResistance = " << newResistance << "\nReproduction rate = " << newReproductionRate << endl;
   resistance = newResistance;
   reproductionRate = newReproductionRate;
}

virus::~Virus (void){
    cout << "Virus is beeing delted !" << endl;
}

bool virus::survive (float immunity){
  //  live :: actual live [0 - 1]
  if (immunity > live){

  } else if (immunity < live){

  } else if (immunity == live){

  }
}

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
