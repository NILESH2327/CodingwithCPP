#include<iostream>
using namespace std;
class node{
  public:
  int data;
  node*next;
  node(int data1){

    this->data=data1;
    this->next=nullptr;


  }
   public:
   ~node(){
    int val=this->data;
    if(this->next!=nullptr){
      delete next;
      next=nullptr;
    }
    cout<<"memory free with data"<<val<<endl;
  }
};
void insertnode(node*&tail,int ele,int d){
  if(tail==nullptr){
  node*newnode=new node(d);
  tail=newnode;
  newnode->next=newnode;
  
  }
  else{
    //nonempty list
    node*curr =tail;
    while(curr->data!=ele){
      curr=curr->next;
    }
    //element found
    node*temp=new node(d);
    temp->next=curr->next;
    curr->next=temp;
  }



}
void deletenode(node*&tail,int value){
  if (tail==nullptr){
    cout<<"this is empty"<<endl;
    return ;

  }
  else{//for non empty node
    node *prev=tail;
    node*curr=prev->next;
    while(curr->data!=value){
      prev=curr;
      curr=curr->next;
    }
    prev->next=curr->next;
    //1node
    if(curr==prev){
      tail=nullptr;
    }
    //for 2 node
    if(tail==curr){
      tail=prev;
    }
    curr->next=nullptr;
    delete curr;

  }
}
void print(node*tail){
  if(tail==nullptr){
    cout<<"list is empty"<<endl;
    return;
  }
  node*temp=tail;
  do{
  cout<<tail->data<<" ";
  tail=tail->next;
  }while(tail!=temp);
  cout<<endl;

}
int main(){
  node*tail=nullptr;
 insertnode(tail,5,3);
 print(tail);
//  insertnode(tail,3,5);
//  print(tail);
//  insertnode(tail,5,7);
//  print(tail);
//  insertnode(tail,5,11);
//  print(tail);
// // insertnode(tail,,1);
// //  print(tail);
 deletenode(tail,3);
 print(tail);

  return 0;
}