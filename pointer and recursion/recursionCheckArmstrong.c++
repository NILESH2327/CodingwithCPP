#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;
//check number is armstrong or not .
int powfunction(int p,int q){
if(q==0) return 1;
if(q%2 ==0){
int result = powfunction(p,q/2);
return result*result;
}
else{
  //if q is odd
int result = powfunction(p,(q-1)/2);
return p*result*result;
}

}
int f(int n,int d){
  if(n==0)return 0;
  return powfunction(n%10,d)+f(n/10,d);
}

int main (){

int n;
cin>>n;
int no_of_digits=0;
int temp=n;
while(temp>0){

  temp=temp/10; 
  no_of_digits++;
}
int result =f(n,no_of_digits);
 if (result ==n){
  cout<<"yes"<<endl;

 }
 else{
  cout<<"no";
 }
  return 0;
}