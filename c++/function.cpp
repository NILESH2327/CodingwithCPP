#include<iostream>

using namespace std;
void changevalue(int &a, int &b){
a=100;
b=99;

}
int main(){

int p=4;
int q=5;
changevalue(p,q); //yadi andar ki value change karke print karna ho then apply new address method

cout<<p<<endl;
cout<<q<<endl;
return 0;
}