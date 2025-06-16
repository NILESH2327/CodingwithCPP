#include<iostream>

using namespace std;
int getpivot(int arr[],int n){
   int s=0;
   int e=n-1;
   int mid=s+(e-s)/2;
   while(s<e){
    if(arr[mid]>=arr[0]){
      s=mid+1;
    }
    else{
      e=mid;
    }
    mid=s+(e-s)/2;
   }
   return s;
}
 int  binarysearch(int arr[],int s, int e,int key){
 
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
int key ;
cin>>key;
int arr[]={7,9,1,2,3};
int n=5;
int pivot=getpivot(arr,n);
//for second line  1 2 3 arr[pivot]<=key&& arr[n-1]>=key where s=pivot, e=n-1;
// and else part cover first line 7 9 where s=0,e=pivot-1;
if(arr[pivot]<=key&& arr[n-1]>=key){
  cout<<"At index of array is "<<binarysearch(arr,pivot,n-1,key);
}
else{
  cout<<"At index of array is "<<binarysearch(arr,0,pivot-1,key);
}

  return 0;
}