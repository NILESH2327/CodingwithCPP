#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<stdio.h>
using namespace std;


int main() {
//null p
// int *ptr='\0';
// int *p=NULL;
// cout<<ptr<<endl;
// cout<<p<<endl;
//dangling pointer


    // int *ptr ; // allocate memory
    // *ptr = 10; // assign value
    // cout<<*ptr<<endl;// print value

    // free(ptr); // deallocate memory

    // // ptr is now a dangling pointer
    // cout<<*ptr<<endl; // prints garbage value or crashes
   //3. void pointer.
   int x=20;
   void *ptr=&x;
   cout<<ptr; //eaisly print address of pointer
   //cout<<*ptr;//this is wrong method we cannot derefrence void pointer cuz it has no value




return 0;
}