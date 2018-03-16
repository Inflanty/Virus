/*schort sketch*/
#include <iostream>
#include <cstdlib>
#include <ctime>

#include "virusLIB.h"
//#include "sign.h"

using namespace std;
int tmp = 0;
int virusCount = 0;

void ux_randOne(){
  int random = rand() % 100;

  for (int i = 0; i < 100; i ++){
    if(i == random){
      cout << "Now\nMatches ! : " << i << endl;
    } else {

    }
  }
}

void uv_randMulti(){
  while(1){
    tmp ++;
    for (int i = 0; i < 100; i ++){
        int random = rand() % 100;
        if(i == random){
          cout << "Yes, good job !\nNumber of iterations : " << tmp << endl;
          tmp = 0;
        } else {
          cout << "Nope" << endl;
        }
    }
  }
}

int main(){
  srand( time( NULL ) );

  //uv_randMulti();
  virus virusOne(0.8, &virusCount);
  virus virusTwo(virusOne, &virusCount);
  virus virusThird(virusOne, &virusCount);
  cout << "Virus count : " << virusCount << endl;
  virusTwo.resistance = 0.2;
  virusOne.print();
  virusTwo.print();
  virusThird.print();

  virusThird.resistance = 0.95;
  virusOne.print();
  virusTwo.print();
  virusThird.print();


  virusOne.print_this();
  virusTwo.print_this();
  virusThird.print_this();

  cout << "REPO RATE " << virusThird.get() << endl;
  virusThird.reproductionRate = 0.1;


  float live = 0, def = 0.4;
  cout << "Provide life level for test : " << endl;
  cin >> live;

  bool ans = virusOne.survive(live, def);
  if(ans){
    cout << "Virus didn't survive" << endl;
    virusOne.~virus();
    return 0;
  }else {
    cout << "Virus survived" << endl;
    return 0;
  }
  while(1){

  }
}
