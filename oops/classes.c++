#include<iostream>

using namespace std;
// oops object oreinted programming structure 
class student {
  public:// in class we assign our properties //and behaviour

  int age ;
  string name;
  
  float percentage;


};

int main(){
  // s1 .... this is object and student his class name 
   student s1;
   s1.name="nileshkumar";
   s1.age=20;
   s1.percentage=76.2;
     cout<<s1.name<<endl;
     cout<<s1.age<<endl;
     student s2;
     s2.name="sachin kumar";
     cout<<s2.name<<endl;
  
    student *s3 = new student();// use pointer variable for making new s3 object 
    s3->age = 60;
    s3->name ="manjeet kumar";
    cout<<s3->age<<" "<<s3->name<<endl;




  return 0;

}
