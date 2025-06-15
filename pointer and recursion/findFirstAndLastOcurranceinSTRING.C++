#include<iostream>
using namespace std;
// string is "aaacad" find first and lasrt occurance/Index of a in this string.
 void findFirstLastIndex(string s,char ch,int *p,int*q ){
  for(int i=0; i<s.size();i++){
    if(s[i]==ch){
      *p=i;
      break;
    }
  }
  for(int i=s.size()-1;i>=0;i--){
    if(s[i]==ch){
      *q=i;
      break;
    }
  }

 }

int main (){
string s="aaacad";
char ch = 'a';
int first =-1;
int last = -1;
int *pf=&first;
int *pl=&last;
findFirstLastIndex(s,ch,pf,pl);
cout<<first<<endl;
cout<<last<<endl;





}