#include<iostream>
using namespace std;
int main(){
int n=5;
int arr[]={1,2,3,4,5};
int k=4;                      
       
int ansarr[5];
// k=k%n;
int j=0;
for(int i=n-k;i<n;i++){
  ansarr[j++]=arr[i];
}
for(int i=0;i<=k;i++){
  ansarr[j++]=arr[i];
}
cout<<endl;
for(int i=0;i<n;i++){

  cout<<ansarr[i]<<" ";
}



  return 0;
}