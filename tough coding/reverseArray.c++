#include<iostream>
#include<vector>

using namespace std;
 void reversearray(vector<int>&v){
  int left =0;
  int right =v.size()-1;

  for(int i=0; i<v.size();i++){
    if(left<right){
      swap(v[left],v[right]);
      right--;
      left++;
    }
  }
}

 int main(){
 int n;
 cin>>n;
 vector<int>v;
 for(int i=0;i<n;i++){
  int ele; cin>>ele;
  v.push_back(ele);
 }
 
 reversearray(v);
  for(int i=0;i<n;i++){
 cout<<v[i]<<" ";
  }



  return 0;

 }