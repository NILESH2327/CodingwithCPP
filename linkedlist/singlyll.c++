#include<iostream>
#include<map>


using namespace std;
class node{
   public:
   int data ;
   node*next;
   node(int data1){
    this->data=data1;
    this->next=nullptr;
   }
   //add a destructor 
   ~node(){
    int value=this->data;
    if(this->next!=nullptr){
      delete next;
      next= NULL;

    }
    cout<<"memory free with data   "<<value<<endl;
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

void deletenode(int postion,node*&head){
  //deleting first element
  if(postion==1){
    node*temp=head;
    head=head->next;
    //memory free
    temp->next=NULL;
    delete temp;
  }
  else{
    //delete mid or last node
    node *curr=head;
    node*prev=nullptr;
    int cnt=1;
    while(cnt<postion){
      prev=curr;
      curr=curr->next;
      cnt++;
    }
    prev->next=curr->next;
    curr->next=nullptr;
    delete curr;


  }
}
int getlength(node*head){
  int len =0;
  while(head!=nullptr){
    head=head->next;

    len++;

  }
  return len;


}
node*findmiddle(node*head){
  int len=getlength(head);
  int ans=len/2;
  node *temp=head;
     // this code in case of even gives right side middle 
     int cnt=0;
     if(ans%2!=0){
       
       while(cnt<ans){
       temp=temp->next;
       cnt++;

      }   // but we use if else for printing left side data
     }
     else{
      //  int cnt=0;
       while(cnt<ans-1){
       temp=temp->next;
       cnt++;
       }

     }
 
  return temp;

}
//optim-------->>>al solution for find middle elment using slow fast approach
node*middestofll(node*head){

  node*fast=head->next;
  node*slow= head;
  while(fast!=nullptr){
    fast=fast->next; // fast ko two step and slow ko one step and gives right middle;
    if(fast!=nullptr){
      fast=fast->next;

    }
    slow=slow->next;
  }
  return slow;
  

}
node*reversekgroup(node*head,int k){
  if(head==nullptr){
    return nullptr;
  }
  node*next=nullptr;
  node*curr=head;
  node*prev=nullptr;
  int cnt =0;
  while(curr!=nullptr&&cnt<k){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
    cnt++;

  }
  if(next!=nullptr){
    head->next=reversekgroup(next,k);
  }
  return prev;

}
bool iscll(node*head){
  if(head==nullptr){
    return false;
  }
  // if ll is single node
  if(head->next==nullptr){
    return true;;
  }                                    //approch 1
  //>2nodes
  node*temp=head->next;
  while(temp!=nullptr&&temp!=head){
    temp=temp->next;
  }
    if(temp==nullptr){
      return false;
    }
    if(temp==head){
      return true;
    }
  

}
bool detectloop(node*head){
  if(head==nullptr){
    return false;//loop nahi hai;
  }
  map<node*,bool>visited;
  node*temp=head;
  while(temp!=nullptr){//take infinte time when loop is present cuz nullptr not meet;
  //cycle is present
  if(visited[temp]==true){
    //mark every element with true;
    cout<<"present loop at"<<temp->data<<" ";
    return 1;
  }
  visited[temp]=true;
  temp=temp->next;
  }
  return false;

}

void print(node*&head){
  node*temp=head;
  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;

  }//for better print;
   cout<<endl;
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
      // cout<<prsent at
    return low;
    }
  }
  
  return nullptr;
}
int main(){
  node *head=new node(10);
  print(head);
  // cout<<node1->data<<endl;
  // cout<<node1->next<<endl;
  // node*head=new node(2);?
  node*tail=head;
  insertathead(head,15);
  print(head);
  insertattail(tail,14);
  print(head);


  

  insertAtPostion(head,3,45);
  print(head);
  insertAtPostion(head,2,45);
  print(head);
  insertAtPostion(head,1,8);
  print(head);
  node*mid= findmiddle(head);
  cout<<"mid data is "<<mid->data<<endl;
  
  cout<<getlength(head)<<endl;
  node*midiocker=middestofll(head);
  cout<<"mid data is "<<midiocker->data<<endl;
  node*ans=reversekgroup(head,2);
  // cout<<ans->data<<endl;
  print(ans);//code run is succesfully.
  // tail->next=head->next;
  cout<<"yes or not "<<iscll(head)<<endl;//1 is cll and 0 is notcll

  // print(head);
    tail->next=head->next;
    if(FCD(head)!=nullptr){
      cout<<"loop hai";
    }
    else{
      cout<<"loop nahi hai";
    }
    

  // if(detectloop(head)){
  //   cout<<"hai"<<endl;
  // }
  // else{
  //   cout<<"nahi hai"<<endl;
  // }

  

  // print(head);
  // deletenode(3,head);
  // print(head);
  // reverselinklist(head);
  // print (head);

  




  return 0;
}