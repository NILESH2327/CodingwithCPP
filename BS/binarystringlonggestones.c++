#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//binary string like 0001101011  and given num =k is number of flip most 0's
// longest string of 1's ki return karni hai 
int largestones(string s,int k){
  int start =0;
  int last =0;
  int zero_count =0;
  int max_length =0;
  for(;last< s.length();last++){
    if(s[last]=='0'){
      zero_count++;
    }
    while(zero_count>k){
      if(s[start]=='0')zero_count--;
      start++;
      
    }
    max_length=max(max_length,last-start+1);
  }
   return max_length;
}


int main(){
  string s;
  cin>>s;
  int k;
  cout<<"enter number of flips:"<<endl;
  cin>>k;

  cout<<largestones(s,k)<<endl;


  return 0;
}