#include<iostream>
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
int arr[]={2,9,5,7,6};
int largestnumber= largestElementIndex(arr,5);

arr[largestnumber]=-1;
int secondLargest=largestElementIndex(arr,5);
cout<<arr[secondLargest]<<endl;



  return 0;
}