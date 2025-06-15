#include<iostream>
using namespace std;
void swap(int *ptr1,int *ptr2){
  int temp =*ptr1;
  *ptr1=*ptr2;
  *ptr2=temp;
}

int main(){
int x=10;
int y=20;
int *ptr1=&x;
int *ptr2=&y;
swap(ptr1,ptr2);
cout<<x<<" ";
cout<<y<<" "<<endl;

cout<<*ptr1<<endl;
cout<<*ptr2<<endl;



  return 0;
}