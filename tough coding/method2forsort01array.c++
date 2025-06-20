#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v){
int leftpointer=0;
int rightptr=v.size()-1;
while(leftpointer<rightptr){
  if(v[leftpointer]==1&& v[rightptr]==0){
    v[leftpointer]=0;
    v[rightptr]=1;
  }
  if(v[leftpointer]==0){
    leftpointer++;
  }
  if(v[rightptr]==1){
    rightptr--;
  }
  cout<<endl;
}


}
int main (){
int n;
cin >>n;
vector<int>v;

for(int i=0; i<n;i++){
  int ele;
   cin>>ele;
  v.push_back(ele);
}
sort(v);
for(int i=0; i<n;i++){
cout<<v[i]<<" ";

}




  return 0;

}
