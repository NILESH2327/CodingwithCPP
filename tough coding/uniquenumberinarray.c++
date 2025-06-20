#include<iostream>
using namespace std;

int main(){
int arr[]={2,3,1,3,2,4,1};
int size=7;
for(int i=0;i<7;i++){
  for(int j=i+1;j<7;j++){
   if( arr[i]=arr[j]) {
arr[i]=-1;
   } 
   }
}
int unique=0;
for(int i=0;i<size;i++){
  if(arr[i]>0){
    cout<<arr[i];
  }
}


 return 0; 
}
