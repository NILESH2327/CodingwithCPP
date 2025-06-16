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
void print(node*head){
  node*temp=head;
  while(temp!=nullptr){
    cout<<temp->data<<" "; 
    temp=temp->next;

  }
  cout<<endl;
}
//sorted ll
node*removeduplicates(node*head){
  if(head==nullptr){
    return nullptr;
  }
  //nonempty
  node*curr=head;
  while(curr!=nullptr){
    if(curr->next!=nullptr&&curr->data==curr->next->data){
      node*next_next=curr->next->next;
      node*nodetodelete=curr->next;
      delete (nodetodelete);
      curr->next=next_next;      //works this code like hell ganda hai but easy hai implement karna hai
    }
    else{
        curr=curr->next;
    }
  }
  return head;
}
//unsortes ll




int main(){
  node *head=new node(14);
  print(head);
 
  node*tail=head;
  insertathead(head,10);
  print(head);
  insertattail(tail,93);
  print(head);

  insertAtPostion(head,3,14);
  print(head);
  
  insertAtPostion(head,1,9);
  print(head);
  insertAtPostion(head,3,14);
  print(head);

  insertAtPostion(head,1,2);
  print(head);
  node*ans=removeduplicates(head);
 print(ans);

 

  return 0;
}