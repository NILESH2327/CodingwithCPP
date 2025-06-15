#include<iostream>

using namespace std;
// run time polymorphism 
class parent{
 public:
 virtual void print(){
  cout<<"parent class"<<endl;

 }
 void show(){
  cout<<"parent class"<<endl;
 }

};
class child :public parent{
   public:
  void print(){
  cout<<"parent class"<<endl;

 }
 void show(){
  cout<<"parent class"<<endl;
 }
};

int main(){
  parent *p;// p is pointer

  child c;
  p =&c;

  //call print function 
 p-> print();
 p-> show();

 



  return 0;

}