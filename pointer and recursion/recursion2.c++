#include<iostream>
using namespace std;
//print k multiple of number n using recursion 
void f(int n,int k){
  if(k<1) return ;
   f(n,k-1);

   cout<<n*k<<" ";
}
int main(){
int n,k;
cin>>n>>k;
f(n,k);


  return 0;
}


