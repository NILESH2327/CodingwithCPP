#include<iostream>
using namespace std;
int f(int p,int q){
//base case
if(q==0)return 1;

return p*f(p,q-1);


}

int main(){
int p,q;
cin>>p>>q;
cout<<f(p,q);
  return 0;
}