#include<iostream>
#include<vector>
using namespace std;

// example we solve problem of prefix sum 5 1 2 4 3 ------to -----5 6 8 12 15 
// doubt queation hai baad me dekhenge



int main (){
int n;
 cin>>n;
 vector<int>v;
 for(int i=0;i<n;i++){
  int ele; 
   cin>>ele;
  v.push_back(ele);

 }
 
//  Sum(v);
 for(int i=0;i<v.size(); i++){
v[i]+=v[i-1];
}

for(int i=0;i<n;i++){
  cout<<v[i]<<" ";

}
cout<<endl;

  return 0;

}