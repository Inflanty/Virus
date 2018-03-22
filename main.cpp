/*schort sketch
To build code, run:
gcc main.cpp -o virus -lstdc++
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

#include "virusLIB.h"
//#include "sign.h"

using namespace std;
int tmp = 0;
int virusCount = 0;
bool running = 1;
int loopTime = 0;

//int random = rand() % 100;
/*
int findLength(string *tab){
  int length = 0;
  do{
    length ++;
  }while(*tab != "NULL");
  return length;
}
*/
int main(){
  srand( time( NULL ) );

  virus virusOne(0.8, &virusCount);
  virus virusTwo(0.8, &virusCount);
  virus virusThird(0.8, &virusCount);

  float live = 0, def = 0.4;
  cout << "Provide life level for test : " << endl;
   cin >> live;

  ifstream source ("textDoc.txt");
 int x, medic;
 source >> x;
 source.close ();
 cout << "From txt file : " << x << endl;

  while(loopTime <= 120){
    loopTime ++;
    medic = rand() % 5;
    if(medic == 3){
      virusOne.fight((double) loopTime/100);
    } else if(medic == 1){
      virusTwo.fight((double) loopTime/100);
    } else if(medic == 2){
      virusThird.fight((double) loopTime/100);
    } else{

    }
  }
  loopTime = 0;

  virusOne.print();
  virusTwo.print();
  virusThird.print();
  return 0;
}
