#include<iostream>
#include<vector>
using namespace std;
// define 2d array and pass n row and we know nth row mein n element hote hai 
vector<vector<int>>pascaltraingle(int n){
vector<vector<int>>pascal(n);
//make a new vector for inserting our vector which is passed by int main fxn and return this function 
for(int i=0;i<n;i++){
  pascal[i].resize(i+1);//resize beacause nth row ma index is less by one and j o to i+1 because i+1 element or nth 
  // number element print karte hai
  for(int j=0;j<i+1;j++){
    if(j==0||j==i){
      pascal[i][j]=1;// this case according to combination formula one hota hai
    }
    else{
    pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];//this logic i make eaisly ok
    }
  }
  cout<<endl;// row use karne ke baad hum endl lagate hai 
}
return pascal;
}
 int main(){
  int n;
  cin>>n;
  vector<vector<int>>v;
  v=pascaltraingle(n);
// use two loop for one printing space and second printing element when we apply this method than we make easily 
// pascal traingle.
for(int i=0;i<v.size();i++){
  for(int j=0;j<v.size()-i;j++){
cout<<" ";
    }
    for(int j=0;j<v[i].size();j++){
cout<<v[i][j]<<" ";
  }
    
  cout<<endl;
}



  return 0;

 }