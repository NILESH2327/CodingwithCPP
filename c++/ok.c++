#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long n;
    cin>>n;
   set<long long>a,b,c;
   bool valid=true;
   long long num;
   for(int i=0;i<n;i++){
    cin>>num;
    a.insert(num);
    c.insert(num);


   }
   for(int i=0;i<n;i++){
    cin>>num;
    b.insert(num);
    c.insert(num);
   }
   if(a.size()==1){
    if(b.size()>=3){
        valid=true;
    }else{
        valid=false;
    }
   }
   else if(b.size()==1){
    if(a.size()>=3){
        valid=true;
    }
    else{
        valid=false;
    }
   }
   if(valid){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
    
}

