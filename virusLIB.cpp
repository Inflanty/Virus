/*
virusLIB.cpp

User library for VIRUS purpose
Author  :: Jan Glos
Date    :: 8/03/2018
Place   :: Denmark, Aarhus
*/
#include "virusLIB.h"

virus::virus (float newResistance, int * virusCount){
   cout << "Object VIRUS is being created,\nResistance = " << newResistance << "\nReproduction rate default = "<< defaultReproductionRate << endl;
   resistance = newResistance;
   reproductionRate = defaultReproductionRate;
   *virusCount += 1;
};

virus::virus (float newReproductionRate, float newResistance, int * virusCount){
   cout << "Object VIRUS is being created,\nResistance = " << newResistance << "\nReproduction rate = " << newReproductionRate << endl;
   resistance = newResistance;
   reproductionRate = newReproductionRate;
   *virusCount += 1;
};

virus::virus (virus &existing, int * virusCount){
  cout << "Object VIRUS is being created from existing one,\nResistance = " << existing.resistance << "\nReproduction rate = " << existing.reproductionRate << endl;
  resistance = existing.resistance;
  reproductionRate = existing.reproductionRate;
  *virusCount += 1;
};

virus::~virus (){
    cout << "Virus is beeing delted !" << endl;
};

bool virus::survive (float live, float immunity){
  //  live :: actual live [0 - 1]
  if (immunity > live){
    return true;
  } else if (immunity < live){
    return false;
  } else if (immunity == live){
    return true;
  }
};

void virus::print(){
  cout << "\033[1;31m***************** DATA *****************\033[0m" << endl;
  cout << "Name : " << virus << "\nResistance : " << resistance << "Reproduction rate : " << reproductionRate << endl;
};
