#include<iostream>

using namespace std;
//given a number n .print ths sum of n natural number  but with alternate.
int f(int n){

if(n==0) return 0;

return  f(n-1) + ((n%2==0)?(-n):n);

}

int main(){
int n;
cin>>n;

cout<<f(n)<<endl;


  return 0;
}
















