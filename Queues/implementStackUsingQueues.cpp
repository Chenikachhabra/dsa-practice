#include <iostream>
#include <queue>
using namespace std;

class MyStack {
public:
    queue<int> q1, q2;

    void push(int x) {
        q2.push(x);

        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        swap(q1, q2);
        cout << x << " pushed\n";
    }

    void pop() {
        if (q1.empty()) {
            cout << "Stack Underflow\n";
            return;
        }

        cout << q1.front() << " popped\n";
        q1.pop();
    }

    int top() {
        if (q1.empty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return q1.front();
    }

    bool empty() {
        return q1.empty();
    }
};

int main() {
    MyStack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.top() << endl;

    st.pop();
    cout << "Top element: " << st.top() << endl;

    st.pop();
    st.pop();
    st.pop(); // Underflow test

    return 0;
}