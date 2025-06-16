#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;
//reverse ll is my topic
class node{
  public:
  int data;
  node*next;
  node(int data1){
    this->data=data1;
    this->next=nullptr;

  }

};
void insertathead(node*&head,int d){
  //create a new node
  node*temp=new node(d);
  temp->next=head;
  head =temp;


}
void insertattail(node*&tail,int d){
  node*temp=new node(d);
  tail->next=temp;
  // tail=tail->ne;
  tail=temp;
  

}
void insertAtPostion(node*&head,int postion,int d){
  // insert at head postion 
  if(postion==1){
    insertathead(head,d);
    return ;
  }
  //create a new node jo ki head ko point kar raha hoga

  node*temp=head;
  int cnt=1;
  while(cnt<postion-1){
    temp=temp->next;
    cnt++;
  }
  node*nodetoinsert=new node(d);
  nodetoinsert->next=temp->next;
  temp->next=nodetoinsert;

}
node*reverselinklist(node*head){
  //for single node 
  if(head==nullptr||head->next==nullptr){
    return head;

  }
  //curr ke next ko forward mein store krana  and us connection ko means
  //currnext ko piche assign karna tah reverser me  to curr next ko prev kar diya fr prev
  //ko aage badhakar curr par and curr ko forward par kar diya
  //t.c is bigo n and spacis bigo 1
  node*prev=nullptr;
  node*curr=head;
  node*forward=nullptr;
  while(curr!=nullptr){
    forward=curr->next;
    curr->next=prev;
    prev=curr;
    curr=forward;


  }
  return prev;//reverse karne ke baad new head prev hota hai 

}
void rans(node*head){
   node*curr=head;
  node*prev=nullptr; 
  if(curr= nullptr){
    head=prev;
    return ;           //this is recursive method
  }
  node*forward=curr->next;
  reverse(curr,prev);

}
// node *reversenode(node*head){
//    node*curr=head;
//   node*prev=nullptr;   // this method is not applicable not support in vs code
 
//   // reverse(head,curr,prev);
//   reverse(head,curr,prev);
//   return head;
  
// }
void print(node*&head){
  
  node*temp=head;
  // int cnt=0;
  while(temp!=nullptr){
   cout<<temp->data<<" ";
    temp=temp->next;
  
  }
  cout<<endl;
}

int main(){
  node *node1=new node(10);
  node*head=node1;
  node*tail=node1;
  print (head);

  insertathead(head,2);
  print(head);
  insertattail(tail,5);
  print(head);
  // reversenode(head);
  // print(head);
  reverselinklist(head);
  print (head);

  // cout<<"head is :"<<head->data<<endl;
  // cout<<"tail is :"<<tail->data<<endl;
  

 

  return 0;

}