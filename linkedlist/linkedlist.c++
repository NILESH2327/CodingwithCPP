#include<iostream>
#include<vector>
using namespace std;
//linked list is linear data structure and collection of node which is store data and next memory location null pointer
// it can store int char string and float not contiguous 
// starting point is called head
class Node{
  public:
  int data ;
  Node* next;
  public:
  Node(int data1, Node *next1){
    //parmetrised constructor 
    data =data1;
    next=next1; 
  }
  // i know ki hame main function ke node function mein nullptr pass karna padta hai
  public:
  Node(int data1){
    data= data1;
    next=nullptr;
  }
  
};
Node *convertarr2ll(vector<int>&arr){
    Node *head=new Node(arr[0]);
    Node *mover=head;
    for(int i=0;i<arr.size();i++){
      Node *temp=new Node(arr[i]);
       mover->next=temp;
        mover =temp;
    }
    return head;
  
  }
  int lengthofll(Node*head){
    int count=0;
    Node *temp=head;
    while (temp!=NULL)
    {
      temp=temp->next;
      count++;
    }
    return count;
  }
  int checkifpresent(Node *head, int val){
    Node *temp=head;
    while (temp)
    {
      if(temp->data==val)return 1;
      temp=temp->next;
    }
    return 0;

  }
int main(){
  vector<int>arr={2,5,8,7,9};
    Node* y=new Node(arr[0]);//in node we have two data one is data and second is last address 
    Node *head=convertarr2ll(arr);
    cout<<head->data<<endl;
    cout<<head->next<<endl;
    // cout<<y;
        Node *temp=head;
    cout<<lengthofll(head)<<" ";
 
     cout<<checkifpresent(head,9);// check easily
    // while (temp)
    // {
    //   cout<<temp->data<<" ";
    //   temp=temp->next;
  
    // } 


  // cout<<y<<endl;// y is pointer si y is store address but i do demodulate and print method y->data or next  so print is value
  
  // cout<<y->data<<endl;
  // cout<<y->next<<endl;


 //2ndmethod--- // Node y= Node(arr[2],nullptr);
  // cout<<y.data<<endl;// we print data at a arr[index]
  // cout<<y.next<<endl;// next address always is null ptr so ans is 0

  return 0;

}