#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;
// cout<<v.size();
int size=5;
for(int i=0; i<size; i++){
  int a;

  cin>>a;
  v.push_back(a);

}
for(int i=0; i<v.size(); i++){
  cout<<v[i]<<" ";
}
cout<<endl;




  return 0;

}