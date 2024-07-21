#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:

    stack<int>s1,s2;

    void push(int val){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(val);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    void pop(){
        if(s1.empty()){
            cout<<"queue is empty"<<endl;
        }
        cout<<"poped is ->"<<s1.top()<<endl;
        s1.pop();
    }
    void front(){
        cout<<"top ele is->"<<s1.top()<<endl;
    }

};


int main(){

    Queue q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.pop();
    q.front();


}