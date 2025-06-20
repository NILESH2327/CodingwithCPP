#include<iostream>
#include<vector>
using namespace std;
//dry run
// here no of 0 is 4 of given aray 1 1 0 0 1 0 1 0 
//i=0,<4 than at v[i]=0 and when i=4 than we replace 0 from one
//made a function for solving these method 
void sortarraybinary(vector<int> &v){
  int no_zeroes=0;
  for(int i=0;i<v.size(); i++){
    if (v[i]==0){
      no_zeroes++; //firstly i count number of zeroes foe converting to 0 and1.
    }
  }
  for(int i=0;i<v.size() ;i++){
    if(i<no_zeroes){
      v[i]=0; 
        

    }
    else{
      v[i]=1;

    }
  }
}

// our question solve sorting of array which is made by 0 and 1

int main (){
  int n;
  cin>>n;
vector<int>v;
for(int i=0; i<n; i++){
  int ele;
   cin>>ele;
   v.push_back(ele);


}
sortarraybinary(v);
for(int i=0; i<n; i++){
  cout<<v[i]<<" ";
}
cout<<endl;

  return 0;
}

