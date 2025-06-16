#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
  int n,x;
  cin>>n>>x;
  long long ans=0,lastp=0;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int  i=0;i<n;i++){
    ans=max(ans,arr[i]-lastp);
    lastp=arr[i];

  }
   ans =max(ans,(2*(arr[n-1]-lastp)));
   cout<<ans<<endl;
 }


  return 0;

}







 