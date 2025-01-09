#include <stack>
using namespace std;

// @leet start
class MyQueue {
private:
    stack<int> stack1;
    stack<int> stack2;

public:
    MyQueue()
    {
    }

    void push(int x)
    {
        while (!stack1.empty()) {
            int data = stack1.top();
            stack2.push(data);
            stack1.pop();
        }

        stack2.push(x);

        while (!stack2.empty()) {
            int data = stack2.top();
            stack1.push(data);
            stack2.pop();
        }
    }

    int pop()
    {
        int data = stack1.top();
        stack1.pop();
        return data;
    }

    int peek()
    {
        return stack1.top();
    }

    bool empty()
    {
        return stack1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @leet end
