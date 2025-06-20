#include<iostream>
#include<vector>

using namespace std;
bool checkperfixsum(vector<int>&v){
int totalsum=0;
for(int i=0;i<v.size();i++){
  totalsum+=v[i];
}
int prefixsum=0;
for(int i=0;i<v.size();i++){
  prefixsum+=v[i];
int sufixsum=totalsum-prefixsum;
if(prefixsum==sufixsum){
  return true;
}
}
return false;
}
int main(){
int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
  int ele; 
   cin>>ele;
  v.push_back(ele);

 }
cout<<checkperfixsum(v)<<endl;


  return 0;
}