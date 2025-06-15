#include<iostream>
using namespace std;
//sum of array values;
int f(int *arr, int i,int n,int *sum){
  if (i==n-1)
  {
   return *sum+=arr[i];
  }
  f(arr,i+1,n,sum);
  *sum+=arr[i];
   return *sum;
  
}

int main(){
  int n=5;
  int x=0;
  int *sum=&x;

  int arr[]={9,2,4,1,7};
  cout<<f(arr,0,n,sum);

  return 0;

}