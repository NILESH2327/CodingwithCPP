#include <iostream>
using namespace std;

int main(){
//count the number of digits for a given number n?
int n;
cin>>n;
int digits =0;
while(n>0){
  digits++;
  n/=10;
}
cout<<digits<<endl;
  return 0;
}