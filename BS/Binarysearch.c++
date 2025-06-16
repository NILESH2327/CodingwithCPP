#include<iostream>
 
 using namespace std;
 //binary search 
 int  binarysearch(int arr[],int n,int key){
 int s =0;
 int e =n-1;
 int mid= s+ (e-s)/2;//for optimistion time complextiy is ver less bigo n 
 while(s<=e){
  if(arr[mid]==key){
    return mid;
  }
  else if (arr[mid]>key){
   e=mid-1;
  }
  else{
    s=mid+1;
  }
  mid=s+(e-s)/2;
 }
 return -1;

 }
 

 int main(){
  int arr[7]={1,3,5,7,3,4,7};
 int n=7;
 int key =7;
 int index= binarysearch(arr,n, key);

 cout<<"find the location on ith postion:"<<index;

  return 0;

 }