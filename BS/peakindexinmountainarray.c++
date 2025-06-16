#include<iostream>

using namespace std;
// there is two sorted arrat one line is increasing and second is decreasing.
int peakindexmountain(int arr[],int n){
   int s=0;
   int e=n-1;
   int mid=s+ (e-s)/2;
    while(s<e){
  if(arr[mid]<arr[mid+1]){
    s=mid+1;
  }
  else{
    e=mid;//because its reach first line which is incrasing 
  }
  mid=s+(e-s)/2;

  }
  return e;//return a or b both are equal
}
int main (){
  int arr[] ={1,4,6,7,37,5,3,2,};
  int n=8;

  cout<<"find peak index :"<<peakindexmountain(arr,n);
  return 0;

}