/*schort sketch*/
#include <iostream>
#include <cstdlib>
#include <ctime>

#include "virusLIB.h"

using namespace std;
int tmp = 0;

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
  virus virusOne(0.5);
  float live = 0, def = 0.4;
  cout << "Provide life level for test : " << endl;
  cin >> live;

  bool ans = virusOne.survive(live, def);
  if(ans){
    cout << "Virus didn't survive" << endl;
    virusOne.~virus();
    return 0
  }else {
    cout << "Virus survived" << endl;
    return 0;
  }
  while(1){

  }
}
