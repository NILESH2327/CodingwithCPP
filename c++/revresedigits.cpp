#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int reverse =0;
while(n>0){

  int x= n%10;
  reverse*=10+x;

}
cout<<reverse<<endl;


  return 0;

}