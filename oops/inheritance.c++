#include<iostream>
using namespace std;
// single inheritance 
// when we assign two class in on child its called hierarchical inhertance
class p1{
  public:
  p1(){
    cout<<"p1prop"<<endl;
  }
};
class parent{
  public:
   string name;
  parent(){
    cout<<"parent class"<<endl;
   

  }
  
};
class child1:public parent{
  public:
  child1(){

  }
};// in child 1 and child2 both access on parent class
class child2:public parent {
  public:
  child2{

  }
};
class child  :public parent ,public p1{// two parent class assign in one child class its process called 
//multiple inheritance
  public:
   int age;
  child(){
    cout<<"child class"<<endl;
  }
};
class grandchild:public child{
 

public:

   grandchild(){
    cout<<"grandchild class"<<endl;
   }
};

int main(){
 
//  child c;
 grandchild gc;
 gc.name="pota";
 gc.age=88;
 cout<<gc.name<<" "<<gc.age<<endl;
// we can easily access in gc prop of parent and child this is multilevel inheritance

/*there is super level inheritance  (parent-to-p1-to-child-to-grandchild)
its also called hybrid inheritance
#####---->>>> we know dimoabd problem parent to child1 and child2 and grandchild
parent prop is inserted two times in grand child so this problem is dimoand problem...
*/  

  return 0;

}