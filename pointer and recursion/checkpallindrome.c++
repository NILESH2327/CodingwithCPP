#include<iostream>
 using namespace std;
 bool f(int num,int *temp){
  if(num>=0 and num<=9){
    int lastdigit=(*temp%10);
    *temp/=10;
    return (num==lastdigit);
  }
 
  bool result= (f(num/10,temp)and (num%10)==((*temp)%10));
  *temp/=10;
  return result;
 }
 int main(){
int num;
cin>>num;
int a=num;
int *temp=&a;
cout<<f(num,temp);

  return 0;
 }