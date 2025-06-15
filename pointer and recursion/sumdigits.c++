#include<iostream>
using namespace std;
// sum of all digits by recursion 

int f(int n){
  if(n<=9 && n>=0) return n;
  

  return f(n/10)+ n%10;
}
int main(){
int n;
cin>> n;
cout<<f(n)<<endl;
  return 0;
}