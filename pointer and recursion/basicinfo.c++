#include<iostream>
using namespace std;
int sum(int *ptrx,int *ptry ){
   int result= *ptrx+*ptry;
   
  return result;
}


int main(){
// int x=10;
// int *ptr;
// cout<<ptr<<" ";
// ptr =&x;
int n,m;

cin>>n>>m;
int *ptrx=&n;
int *ptry=&m;
 int result1 =sum(ptrx,ptry);
//  int result2 =sum(*ptrx,*ptry);
cout<<*ptrx<<endl;
cout<<*ptry<<endl;
 cout<<result1<<endl;
  return 0;
}