#include<iostream>
  
  using namespace std;
  //square root by binary searching
   long long int sqrtbs(int n){
    int s =0;
    int e=n;
    long long int mid =s+(e-s)/2;
    long long int ans=-1;
    
    while (s<=e)
    {
     long long int square=mid*mid;
     if (square==n)return mid;
    if(square<n){
      ans=mid;
      s=mid+1;


    }
    else{
      ans=mid;
      e=mid-1;
    }
    mid=s+(e-s)/2;
    }
    return ans;

  }
  double moreprecision(int n, int precision, int tempsol){
    double ans =tempsol;
    double factor=1;
   for(int i=0; i<precision;i++){
    factor/=10;
    for(double j=ans;j*j<n;j+=factor){
       ans =j;
    }

   }
   return ans;
  }

  int main(){
   int n;
   cin>>n;
   
   
   int tempsol =sqrtbs(n);
   cout<<moreprecision(n,3,tempsol);

    return 0;

  }

