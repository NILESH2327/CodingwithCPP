#include<iostream>

using namespace std;
// 0 1  1 2 3 5 8
int f(int n){
if(n==0)return 0;
if(n==1)return 1;

return f(n-1)+f(n-2);


}
int main (){
int n;
cin>>n;
cout<<f(n);

  return 0;
}