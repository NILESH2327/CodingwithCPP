#include<iostream>
using namespace std;
// polymorphism 2 type 1 is compile time 
class sum{
  public:
  void add(int x ,int y){
    int sum= x+y;
    cout<<sum<<endl;
  }
  void add(int x ,int y,int z){
    int sum= x+y+z;
    cout<<sum<<endl;
  }
  void add(float x ,float y){
    float sum= x+y;
    cout<<sum<<endl;
  }
};

int main(){

    sum s;
    s.add(3,2);
    s.add(float(5.8),float(8.9));
    s.add(3,5,10);
    


  return 0;
  
}