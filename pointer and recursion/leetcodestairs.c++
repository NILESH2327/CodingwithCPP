#include<iostream>
using namespace std;
// you have oth stair. and you need to reach the nth stair . each time you move only one step or two 
//step return the no of distnict ways in which you can climb from oth to nth stair.
int climbways(int n){
if(n<0)return 0;
if(n==0)return 1;

int ans =climbways(n-1)+climbways(n-2);
return ans;
}

int main(){
int n;
cin>>n;
cout<<climbways(n);

  return 0;
}