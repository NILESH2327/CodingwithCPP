#include<iostream>
using namespace std;
int main(){

int a[]= {3,4,6,9,11,45,7};
int key ;
cin>>key;
int ans=-1;
for(int i=0; i<7; i++){
  if(a[i]==key){
    ans= i;
    break;
  }
}

cout<<"indexno: "<<ans<<endl;
return 0;
}
