#include<iostream>
using namespace std;
//1700 -1917 se julioncaleneder 
int main(){
int y;
cin>>y;
while(y<1917){
if(y%4==0){
  cout<<"12.09."<<y;
  break;
}
else{
  cout<<"13.09."<<y;
  break;
}
}
while(y>=1918){
  if (y%4==0 && y%100!=0 || y%400 ==0){
     cout<<"12.09."<<y;
     break;
  }
  else{
    cout<<"13.09."<<y;
    break;
  }
}



  return 0;
}