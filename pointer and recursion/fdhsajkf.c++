#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstdlib>

using namespace std;
int d(vector<vector<int>>&matrix){
  int n=matrix.size();
  int a=0;
  int b=0;

  for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
  a+=matrix[j][j];
  b+=(matrix[n-1-i][j]);
  }
  
}
return abs(a-b);

}

int main(){
//there n is order of square of matrix
int n;
cin>>n;
vector<vector<int>>matrix( n, vector<int>(n));//keep in mind right 
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    cin>>matrix[i][j];
  }
  
}

int digonalsum=d(matrix);
cout<<digonalsum<<endl;
return 0;
}
