#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
// Rotation n*n matrix at 90 degree;
void rotatearray(vector<vector<int>>&matrix){
  //transpose
  int n=matrix.size();
for(int i=0;i<n;i++){
  for(int j=0;j<i;j++){
    swap(matrix[i][j],matrix[j][i]);
  }

}
// reverse matrix by using reverse.
for(int i=0;i<n;i++){
  reverse(matrix[i].begin(),matrix[i].end());// you use reverse when we include our algorithm 
}
return;
}

int main(){

int n;
cin>>n;
vector<vector<int>>matrix( n, vector<int>(n));
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    cin>>matrix[i][j];
  }
  
}
rotatearray(matrix);
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    cout<<matrix[i][j]<<" ";

  }
  cout<<endl;
}


  return 0;
}