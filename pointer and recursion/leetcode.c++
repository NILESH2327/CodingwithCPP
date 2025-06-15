#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdlib>
using namespace std;
int f(int *arr,int n,int i ){
if(i==n-1)return 0;
if(i==n-2) return f(arr,n,i+1)+abs(arr[i]-arr[i+1]);
return min(f(arr,n,i+1)+abs(arr[i]-arr[i+1]),f(arr,n,i+2)+abs(arr[i]-arr[i+2]));
}
int main(){
// frog jump 
//there are n stone 1<=i<=n the hieght of stone is  hi intially at i we move only ith to i+1 or i+2 step
//input: 4
//output:30
int arr[]={10,30,40,20,60};
int n=5;
cout<<f(arr,n,0);

  return 0;

}