#include<iostream>

using namespace std;
void f(int *arr,int i,int n){
//base case
if(n==i) return;
cout<<arr[i]<<" ";
f(arr,i+1,n);
}

int main(){
int arr[]={2,4,5,6,9,8};
int n=6;
f(arr,0,n);

  return 0;
}