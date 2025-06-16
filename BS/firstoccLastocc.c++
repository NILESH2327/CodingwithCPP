#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int key){
  int ans=-1;
  int s=0;
  int e=n-1;
  int mid =s+(e-s)/2;
  while(s<=e){
    if(arr[mid]==key){
    
       ans=mid;
       e=mid-1;
    }
    else if(arr[mid]>key){
      e=mid-1;
    }
    else {
      s=mid+1;

    }
    mid=s+(e-s)/2;

  }
  return ans;
}
int lastocc(int arr[],int n,int key){
  int ans=-1;
  int s=0;
  int e=n-1;
  int mid =s+(e-s)/2;
  while(s<=e){
    if(arr[mid]==key){
     
      ans=mid;
       s=mid+1;
    }
    else if(arr[mid]>key){
      e=mid-1;
    }
    else {
      s=mid+1;

    }
    mid=s+(e-s)/2;

  }
  return ans;
}


int main(){
int arr[7]={1,3,5,7,3,4,7};
 int n=7;
 int key =7;
 cout<<"first occurance at ith postition:"<<firstocc(arr,n,key)<<endl;
 cout<<"last occurance at ith postition:"<<lastocc(arr,n,key)<<endl;

 

  return 0;

}