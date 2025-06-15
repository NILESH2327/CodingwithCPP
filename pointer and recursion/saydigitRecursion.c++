#include<iostream>

using namespace std;
void saydigits(string s[],int n){
  if (n==0)
  {
    return ;

  }
  int digit=n%10;
  n/=10;

  saydigits(s,n);
cout<<s[digit]<<endl;
}

int main(){
  string s[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
  int n;
  cin>>n;
  cout<<endl<<endl<<endl;
  saydigits(s,n);

  return 0;

}