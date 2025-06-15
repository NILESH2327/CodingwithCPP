#include<iostream>

using namespace std;
//s="abcax" remove occurance of a in string
string f(string &s,int i,int n){
  if(i==n) return " ";//when i reach last point then return nothing 
  string current="";
  current+=s[i];
  return ((s[i]=='a')?" ":current)+f(s,i+1,n);

}

int main(){
  string s="abcax";
  int n=5;
  cout<<f(s,0,n)<<endl;


  return 0;
}