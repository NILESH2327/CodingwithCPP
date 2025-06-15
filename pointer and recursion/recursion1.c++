#include<iostream>

using namespace std;
//print 1 to n number using recursion 
void f(int n){
  if(n<0) return ;

  f(n-1);
  cout<<n<<" ";
}
int main(){
int n;
cin>>n;
f(n);


  return 0;
}