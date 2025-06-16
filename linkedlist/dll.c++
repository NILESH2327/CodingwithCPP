#include<iostream>

using namespace std;
class node{
  public:
  int data;
  node*next;
  node*prev;
  node(int data1){
   this->data=data1;
    this->next=nullptr;
    this->prev=nullptr;
  }
  ~node(){
    int value=this->data;
    if(next!=nullptr){
      delete next;
      next=nullptr;
    }
    cout<<"data free with-- "<<value<<endl;
  }


};
void deletenode(int postion ,node*&head){
  if(postion==1){
    node*temp=head;
    temp->next->prev=nullptr;
    head=temp->next;

    temp->next=nullptr;
    delete temp;//eaisly ha ha 
  }
  else{
    node*curr=head;
    node*prev=nullptr;//starting yahi se hoti hai 
    int cnt =1;
    while(cnt<postion){
      prev=curr;
      curr=curr->next;
      cnt++;
    }
    curr->prev=nullptr;
    prev->next=curr->next;
    curr->next=nullptr;
    delete curr;


      }
}

void insertathead(node*&head,int d){
  
  node*temp=new node(d);
  temp->next=head;
  head->prev=temp;
  head=temp;
}
void insertattail(node*&tail,int d){
   node*temp=new node(d);
   temp->prev=tail;
   tail->next=temp;
   tail=temp;
}
void insertatpostion(node*&head,node*&tail,int postion,int d){
 if(postion==1){
  insertathead(head,d);
  return ;
 }
 else{
  node*temp=head;
  int cnt=1;
  while(cnt<postion-1){
    temp=temp->next;
    cnt++;
  }
  if(temp->next==nullptr){
    insertattail(tail,d);
    return ;
  }
  node*nodetoinsert=new node(d);
  // node*te=head;
  nodetoinsert->next=temp->next;
  temp->next->prev=nodetoinsert;
 
  temp->next=nodetoinsert;
   nodetoinsert->prev=temp;
 
 }
}
int getlen(node*&head){
  int cnt=0;
  node*temp=head;
  while(temp!=nullptr){
    temp=temp->next;
    cnt++;
  }
  return cnt;
}
void print(node*&head){
  node*temp=head;
  while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}
int main (){
  node*head=new node(10);
  // node*head=node1;
  // cout<<getlen(head)<<endl;
  node*tail=head;
  print(head);
 insertathead(head,35);
print(head);
 insertathead(head,77);
  print(head);
  insertattail(tail,89);
  print(head);
 
  insertatpostion(head,tail,3,11);
  print(head);
  insertatpostion(head,tail,1,1);
  print(head);
  insertatpostion(head,tail,7,17);
  print(head);
 
 
  deletenode(1,head);
 print(head);


  return 0;

}
