#include<iostream>
#include<vector>
using namespace std;
// bubblesorting
 int main (){
  int arr[]= {5,1,3,6,2,9,11};
 int n=sizeof(arr)/sizeof(arr[0]);


for(int i=1;i<n-1;i++){
for(int j=0;j<n-i;j++){
  if(arr[j]>arr[j+1]){
    swap(arr[j],arr[j+1]);
  }
}
}
for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
}

  return 0;
 }