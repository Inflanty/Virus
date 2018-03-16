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
using namespace std;

class virus {

public:
    float reproductionRate;    // rate of reproduction, in 0-1
    float resistance;          // resistance against drugs, in 0-1
    float defaultReproductionRate = 0.1;

public:
    virus(float newResistance, int * virusCount);
    virus(float newReproductionRate, float newResistance, int * virusCount);
    virus(virus &existing, int * virusCount);
    ~virus();

    bool survive(float live, float immunity);
    void print();
    float get(){return reproductionRate;};
    void print_this();
};

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
  cout << "Name : -\nResistance : " << resistance << "\nReproduction rate : " << reproductionRate << endl;
};

void virus::print_this(){
  cout << "\033[1;31m*************** DATA THIS **************\033[0m" << endl;
  cout << "Name : -\nthis : " << (int) *this << "\nReproduction rate : " << reproductionRate << endl;
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
