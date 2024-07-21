#include<bits/stdc++.h>
using namespace std;

class Stack {
public:
    queue<int> q;

    void push(int val) {
        int size = q.size();
        q.push(val);

        for (int i = 0; i < size; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    void pop() {
        if (q.empty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        int ele = q.front();
        q.pop();
        cout << "Popped element: " << ele << endl;
    }

    void display() {
        queue<int> temp = q;
        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }
};

int main() {
    Stack st;
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.display();
    st.pop();
    st.display();

    return 0;
}
