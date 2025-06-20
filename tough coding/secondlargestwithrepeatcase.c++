#include<iostream>
#include<algorithm>
using namespace std;
int largestElementIndex(int arr[],int size){
int max =INT16_MIN;
int index =-1;

for(int i=0;i<size;i++){
  if(arr[i]>max){
    index=i;
    max =arr[i];
  }
}
return index;
}
int main(){
  int k;
  cin>> k;

int arr[]={9,5,7,6,9};
int largestindex= largestElementIndex(arr,5);
int largestelement=arr[largestindex];
for(int i=0;i<k;i++){
for(int i=0;i<5;i++){
  if (arr[i]==largestelement){

    arr[i]==-1;
  }
 
}cout<<endl;
}
int secondLargest=largestElementIndex(arr,5);
cout<<arr[secondLargest]<<endl;

  return 0;
}