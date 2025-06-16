#include<iostream>
#include<vector>
using namespace std;


int main(){
 //use for each loop 

vector<int>arr;
for(int i=1; i<=5;i++){
  int ele;
cin>>ele;
arr.push_back(ele);

}
 for(int ele:arr){
  cout<<ele<<" ";
 }
cout<<endl;
arr.insert(arr.begin()+2,13);
for(int i=0;i<arr.size();i++){
  cout<<" "<<arr[i];

}
cout<<endl;

arr.erase(arr.end()-2);
for(int ele:arr){
  cout<<ele<<" ";
 }
cout<<endl;
//i learn erase element and also insert by position 
arr.clear();
for(int ele:arr){
  cout<<ele<<" ";
 }
cout<<endl;

  return 0;
}