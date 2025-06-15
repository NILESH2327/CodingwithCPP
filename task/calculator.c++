#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int main(){
float n,m;
float sum,substraction;
float division,multiplication;

cout<<"Enter your first number: "<<endl;
cin>>n;
cout<<"Enter your second number :"<<endl;
cin>>m;

int operation;
cout<<"enter 1 for  operation   addition(+)"<<endl;
cout<<"enter 2 for  operation   substraction(-)"<<endl;
cout<<"enter 3  for  operation   multiplication(*)"<<endl;
cout<<"enter 4 for operation   division(/)"<<endl;
cin>>operation;

switch(operation){
  case 1:
  sum=(n+m);
  cout<<"yoursum"<<sum<<endl;
  break;
  case 2:
  substraction=(n-m);
   cout<<"your substraction is:"<<substraction<<endl;
   break;
   case 3:
   multiplication=(n*m);
   cout<<"your multiplication is: "<<multiplication<<endl;
   break;
   case 4:
   division=(n/m);
   cout<<"your division is: "<<division<<endl;
   break;
   default:
   cout<<" wrong operation for simple calculator:"<<endl;
   break;
}

  return 0;

}
