#include<iostream>
using namespace std;

class parent{
  public:
  int age;
//  void parent(int n){
//     x=n;
//   }

  private:
  int y;
  //  void parent(int n){
  //   y=n;
  // }

  protected:
  int z;
  //  void parent(int n){
  //   z=n;
  // }

};
class child1 :public parent{
  // x is public 
  // y will be private 
  // x will be protected
    
};
class child2 :private parent{

};
class child3 :protected parent{

};



int main(){
  

  child1 c;
 c.z=2;

  cout<<c.z<<endl;


  return 0;

}



