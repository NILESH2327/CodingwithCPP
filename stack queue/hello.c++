#include<iostream>
#include<queue>
using namespace std;

struct MyQueue{
  int size,cap;
  int *arr;
  MyQueue(int c){
    cap=c;
    size=0;
    arr=new int[size];
  }

  bool isFull(){
    return (size==cap);
  }
  bool isEmpty(){
    return (size==0);
  }
  void enqueue(int x){
    if(isFull()){
      return ;
    }
    else{
      arr[size]=x;
      size++;//push allways in last
    }
  }
  void dequeue(){
    if(isEmpty())return ;
    else{
      for(int i=0;i<size-1;i++){
        arr[i]=arr[i+1];
      }
      size--;
    }
  }
  int getfront(){
    if(isEmpty())return -1;
    else return arr[0];//o is first index
  }
  int getrear(){
    if(isEmpty())return -1;
    else return arr[size-1];
  }
};

int main(){
  MyQueue q(5);

  q.enqueue(7);
  q.enqueue(8);
  q.enqueue(5);
  q.enqueue(3);
  q.enqueue(2);
  cout<<q.getfront()<<endl;
  cout<<q.getrear()<<endl;
  q.dequeue();
   cout<<q.getfront()<<endl;
   cout<<q.getrear()<<endl;
  

  return 0;
}

