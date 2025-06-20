#include<iostream>
#include<vector>
using namespace std;

int main (){

int r1,c1;
cin>>r1>>c1;
int r2,c2;
cin>>r2>>c2;
int c[r1][c2];
int a[r1][c1];
int b[r2][c2];
for(int i=0;i<r1;i++){
  for(int j=0;j<c1; j++){
    cin>>a[i][j];
  }
  cout<<endl;
}
for(int i=0;i<r2;i++){
  for(int j=0;j<c2; j++){
    cin>>b[i][j];
  }
  cout<<endl;
}
for(int i=0;i<r1;i++){
  for(int j=0;j<c2; j++){
    int value=0;
    for(int k=0;k<c1;k++){
      value+=a[i][k]*b[k][j];
    }
    c[i][j]=value;
  }
  cout<<endl;
}
for(int i=0;i<r2;i++){
  for(int j=0;j<c2; j++){
    cout<<c[i][j]<<" ";
  }
  cout<<endl;
}


  return 0;
}


