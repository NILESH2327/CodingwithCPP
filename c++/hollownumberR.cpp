#include<iostream>
 using namespace std;
 int main(){
int n;
int m;

cin>>n;
cin>>m;
for(int i=1; i<=n; i++){
  for(int j=1; j<=m;j++){
    if(i==1||j==1||i==n||j==m){//must be importent for making hollow patten .
      cout<<j;
    }
    else{
      cout<<" ";
    }
   
  }
  cout<<endl;
}

  return 0;
 }