#include <iostream>
#include <stack>
using namespace std;

void pushEle(stack<int>& s1, stack<int>& s2, int x) {
    s1.push(x);
}

void popEle(stack<int>& s1, stack<int>& s2) {
    if (s2.empty()) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
    }
    if (!s2.empty()) {
        s2.pop();
    } else {
        cout << "Queue is empty" << endl;
    }
}

int topEle(stack<int>& s1, stack<int>& s2) {
    if (s2.empty()) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
    }
    if (!s2.empty()) {
        return s2.top();
    } else {
        cout << "Queue is empty" << endl;
        return -1;
    }
}

int sizeOfQ(stack<int>& s1, stack<int>& s2) {
    return s1.size() + s2.size();
}

int main() {
    stack<int> s1;
    stack<int> s2;

    pushEle(s1, s2, 10);
    pushEle(s1, s2, 20);
    pushEle(s1, s2, 30);

    cout << "Front element: " << topEle(s1, s2) << endl; // Output: 10

    popEle(s1, s2);

    cout << "Front element after pop: " << topEle(s1, s2) << endl; // Output: 20

    cout << "Queue size: " << sizeOfQ(s1, s2) << endl; // Output: 2

    return 0;
}
