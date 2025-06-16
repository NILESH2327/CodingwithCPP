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
void print(node*&head){
  
  node*temp=head;
  // int cnt=0;
  while(temp!=nullptr){
   cout<<temp->data<<" ";
    temp=temp->next;
  
  }
  cout<<endl;
}
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
node*FCD(node*head){
  if(head==nullptr){
    return nullptr;
  }
  //slow=low and high=fast;fasttake 2step and slow take one step
  node*low=head;
  node*high=head;
  while(low!=nullptr&&high!=nullptr){
    high=high->next;
    if(high!=nullptr){
      high=high->next;

    }
    low=low->next;
    if(low==high){
    return low;
    }
  }
  
  return nullptr;
}
node*getstartnode(node*head){
  if(head==nullptr){
    return nullptr;

  }
  node*intersection=FCD(head);
  node*low=head;
  while (low!=intersection){
    low=low->next;
    intersection=intersection->next;

  }
  return low;
 
}
void removeloop(node*head){
  if(head==nullptr){
    return ;
  }
  node*startofloop=getstartnode(head);
  node*temp=startofloop;
  while(temp->next!=startofloop){
    temp=temp->next;
  }
  temp->next=nullptr;
}
int main(){
   node *head=new node(10);
  print(head);
 
  node*tail=head;
  insertathead(head,15);
  print(head);
  insertattail(tail,14);
  print(head);

  insertAtPostion(head,3,91);
  print(head);
  
  insertAtPostion(head,1,91);
  print(head);
  insertAtPostion(head,3,45);
  print(head);

  insertAtPostion(head,1,8);
  print(head);
  tail->next=head->next;
    if(FCD(head)!=nullptr){
      cout<<"loop hai and loop se affiliated koi bhi ele: "<<FCD(head)->data;
    }
    else{
      cout<<"loop nahi hai";
    }
    cout<<endl;
    node*ans=getstartnode(head);
    cout<<"begining element is: "<<ans->data<<endl;
    removeloop(head);
    print(head);
     if(FCD(head)!=nullptr){
      cout<<"loop hai and loop se affiliated koi bhi ele: "<<FCD(head)->data;
    }
    else{
      cout<<"loop nahi hai";
    }

  return 0;

}