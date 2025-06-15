#include<iostream>

using namespace std;
class hero{
  public:
  int health;

  char lvl;
 
 hero (int health){
  
  cout<<"this "<<this<<endl;// this operator 
  this->health=health;
 }
 // private ko setter and getter ki help se public mein access kiya ja sakta hai

  void sethealth(int n){
    health =n;

  }
  char setlvl(char c){
    lvl =c;

  }
  int  gethealth(){
    return health;

  }
  char getlvl(){
    return lvl;
  }

};

int main(){
  hero h(10);
  cout<<"address of h"<<&h<<endl;
//staticly
  // hero manjeet;
  // manjeet.sethealth(40);
  // manjeet.setlvl('A');
  // cout<<manjeet.gethealth()<<" "<<manjeet.getlvl()<<endl;
  // // dynamically

  // hero *m= new hero();
  
  // m->sethealth(50);
  // m->setlvl('B');
  // cout<<m->gethealth()<<" "<<m->getlvl();
  return 0;

}