#include<iostream>
#include<vector>
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
bool checkpallindrome(vector<int>&arr){
  int s=0;
  int e=arr.size()-1;
  while(s<=e){
    if(arr[s]==arr[e]){
      s++;
      e--;
      return true;
    }
    else{
      return false;
    }
  
    
  }
  return false;

}
bool ispallindrom(node*head){
  node*temp=head;
  vector<int>arr;

  while(temp!=nullptr){
    arr.push_back(temp->data);
    temp=temp->next;


  }
  return checkpallindrome(arr);
}


int main(){
  node*head=new node(1);
  node*tail=head;
  insertattail(tail,1);
  print(head);
  insertAtPostion(head,2,2);
  print(head);
  insertathead(head,5);
  print(head);
   if( ispallindrom(head)==true){
  cout<<"this is pallindrome "<<endl;
 }
 else{
  cout<<"this is not pallindrome "<<endl;
 }

  return 0;

}