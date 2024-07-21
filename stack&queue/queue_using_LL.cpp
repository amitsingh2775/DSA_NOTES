#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

 struct Queue{

     Node*start;
     Node*end;
     int size;
    Queue(){
        start=NULL;
        end=NULL;
        size=0;
    }

    void push(int x){

        Node* temp=new Node(x);
        if(start==NULL && end==NULL){
            start=temp;
            end=temp;
        }
        else{
            end->next=temp;
            end=end->next;
            size=size+1;
        }
    }
    void pop(){
        if(start==NULL){
            cout<<"queue is empty"<<endl;
        }
       Node* temp=start;
       cout<<"poped ele is ->"<<temp->data<<endl;
       start=start->next;
       delete temp;
    }
    void top(){
        if(start==NULL){
            cout<<"queue is empty"<<endl;
        }
        cout<<"top is->" <<start->data<<endl;
    }

 };

int main(){
      Queue q;
      q.push(7);
      q.push(8);
      q.push(7);
      q.push(9);
      q.pop();
      q.pop();
      q.top();
     q.pop();
     q.pop();
     q.pop();
    
}