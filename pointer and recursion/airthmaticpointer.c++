#include<iostream>
 using namespace std;

// here two type of operator for pointer 1 is incrament and second is decrement
 int main(){
  int  a=5;
  int *ptr=&a;
  int p=*ptr++;
  int *pt=&p;
  cout<<*ptr<<endl;
  

  cout<<*pt++<<endl;

  // cout<<++*ptr <<endl;
  // cout<<(*ptr)++ <<endl;
  // cout<<*++ptr <<endl;
//  




  return 0;

 }
