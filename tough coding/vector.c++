#include<iostream>
#include<vector>
using namespace std;


int main(){
vector<int> v;
v.push_back(4);
v.push_back(3);
v.push_back(2);
for(int i=0; i<v.size();i++){
  cout<<v[i]<<" ";
}
cout<<endl;
v.pop_back();
for(int i=0; i<v.size();i++){
  cout<<v[i]<<" ";
}
cout<<endl;
v.insert(v.begin()+1,9);
for(int i=0; i<v.size();i++){
  cout<<v[i]<<" ";
}
cout<<endl;

v.erase(v.begin()+1);
for(int i=0; i<v.size();i++){
  cout<<v[i]<<" ";
}
cout<<endl;

// we use all element clear in array then we use v.clear;
v.clear();
for(int i=0; i<v.size();i++){
  cout<<v[i]<<" ";
}


  return 0;

}