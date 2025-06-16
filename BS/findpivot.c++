#include<iostream>
using namespace std;
// i have sorted array and we rotate by k terms and find pivot element 
//pivot is maximum or minimum element 

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

int main(){
  
 int arr[] ={8,10,17,19,-1,1,3,4};
  int n=7;
  cout<<"my pivot is:"<<getpivot(arr,n)<<endl;
  return 0;

}