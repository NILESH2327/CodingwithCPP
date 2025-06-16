#include<iostream>
#include<cmath>

using namespace std;
void changevarible(int x);
  
 

int main(){
// int a=5;
// float a=5.6;
// cout<<a<<endl;

//  cout<<::a;this is new method of printing of outside varible 
int a=9;
changevarible(a);





  return 0;
}

void changevarible(int x){
  
  int b= sqrt(x);
  cout<<b<<endl;
  
}