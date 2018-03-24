/*
virusLIB.h

User library for VIRUS purpose
Author  :: Jan Glos
Date    :: 8/03/2018
Place   :: Denmark, Aarhus

Class and Method definitions for virus app
*/
#include <iostream>
#include <typeinfo>
#include <fstream>
#include <cmath>
using namespace std;

class virus {

public:
    float reproductionRate;    // rate of reproduction, in 0-1
    float resistance;          // resistance against drugs, in 0-1
    float defaultReproductionRate;  //float defaultReproductionRate = 0.1;
    double live;
    int number;
    // for future : make global array with names and numbers of objects, to provide name for internal use.


public:
    virus(float newResistance, int * virusCount);
    virus(float newReproductionRate, float newResistance, int * virusCount);
    virus(virus &existing, int * virusCount);
    ~virus();

    void survive(float immunity);
    float get(){return reproductionRate;};
    void fight(double fightTime);
    void print();
};

virus::virus (float newResistance, int * virusCount){
   cout << "Object VIRUS is being created,\nResistance = " << newResistance << "\nReproduction rate default = "<< defaultReproductionRate << endl;
   resistance = newResistance;
   reproductionRate = defaultReproductionRate;
   number = *virusCount;
   *virusCount += 1;
   live = 1;
   defaultReproductionRate = 0.1;
};

virus::virus (float newReproductionRate, float newResistance, int * virusCount){
   cout << "Object VIRUS is being created,\nResistance = " << newResistance << "\nReproduction rate = " << newReproductionRate << endl;
   resistance = newResistance;
   reproductionRate = newReproductionRate;
   number = *virusCount;
   *virusCount += 1;
   live = 1;
   defaultReproductionRate = 0.1;
};

virus::virus (virus &existing, int * virusCount){
  cout << "Object VIRUS is being created from existing one,\nResistance = " << existing.resistance << "\nReproduction rate = " << existing.reproductionRate << endl;
  resistance = existing.resistance;
  reproductionRate = existing.reproductionRate;
  number = *virusCount;
  *virusCount += 1;
  live = 1;
  defaultReproductionRate = 0.1;
};

virus::~virus (){
  live = 0;
  cout << "Virus nr " << number << " is delete !" << endl;
};

void virus::survive (float immunity){
  //  live :: actual live [0 - 1]
  if (immunity > live){

  } else if (immunity < live){

  } else if (immunity == live){

  }
};

void virus::print(){
  cout << "\033[1;31m***************** DATA *****************\033[0m" << endl;
  cout << "Number : "<< number <<"\nResistance : " << resistance << "\nReproduction rate : " << reproductionRate << "\nVirus LIVE : " << live << endl;
};

void virus::fight(double fightTime){
  if (fightTime <= 1 && live != 0){
    live = 1 - pow(fightTime, 2.0);
    cout << "\n::Actual live:: " << live;
  }else if(live == 0){
    this->~virus();
  }
  //virusLive = 1 - pow(fightTime, 2.0);
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
/*
class dataBase {
  void addObject(int number, char *name);
};

void dataBase::addObject(int number, char *name){

};
*/
