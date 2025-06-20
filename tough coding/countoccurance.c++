#include<iostream>
#include<vector>
using namespace std;
// count the number of element strictly grater than x:
int main(){
vector<int>v(5);
for(int i=0;i<v.size();i++){
cin>>v[i];

}
cout<<"enter x: ";
int x;
cin>>x;
int count=0;
for(int i=0; i<v.size(); i++){

if(v[i]>x){
  count++;
}

}
cout<<count<<endl;








  return 0;
}