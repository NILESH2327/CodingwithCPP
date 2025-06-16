#include<iostream> 
#include<vector>

using namespace std;
int main (){
// int n;


vector<int> v;
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
v.push_back(1);
cout<<"size"<<v.size()<<endl;
cout<<"c"<<v.capacity()<<endl;

v.push_back(3);

cout<<"size"<<v.size()<<endl;
cout<<"c"<<v.capacity()<<endl;
v.resize(5);
cout<<"size"<<v.size()<<endl;
cout<<"c"<<v.capacity()<<endl;

v.pop_back();
v.pop_back();//last element delete for we use popback 
cout<<"size"<<v.size()<<endl;
cout<<"c"<<v.capacity()<<endl;



 return 0;

}