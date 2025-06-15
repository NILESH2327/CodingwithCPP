#include<iostream>
using namespace std;
//constructor have 3 types
//destructor cant pass any value
class rectangle{
  public:
  int l;
  int b;
  rectangle(){// default -no arg pass
    l=0;
    b=0;

  }
   rectangle(int x, int y ){
    l=x;

    b=y; // this is parameterised constructor -arg pass

   }
   
   rectangle(rectangle &r){// copy constructor
    //there r is pass object 
    l=r.l;
    b=r.b;

   }
   ~rectangle(){
    cout<<"Destructor is called"<<endl;
   }


};

int main(){
    rectangle *r1 =new rectangle();
  // rectangle r1;// no pass any value
  cout<<r1->l<<" "<<r1->b<<endl;
  delete r1;
  rectangle r2(4,6);// pass the value of x and y
  cout<<r2.l<<" "<<r2.b<<endl;
  rectangle r3= r2;// r2 copying in r3;enc
  cout<<r3.l<<" "<<r3.b<<endl;


  return 0;

}