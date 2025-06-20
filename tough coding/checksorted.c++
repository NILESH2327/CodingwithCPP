#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int>v(6);
 for(int i=1;i<=6;i++){
  cin>>v[i];
 }
bool sorted=true;
for(int i=1; i<=6;i++){
  if(v[i]<=v[i-1]){
    sorted=false;
  }
}
//keep in our mind its imp for chckeing sorted array 
cout<<sorted<<endl;





  return 0;
}


