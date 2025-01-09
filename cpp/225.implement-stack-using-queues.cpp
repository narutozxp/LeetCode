#include <queue>
using namespace std;

// @leet start
class MyStack {
private:
    queue<int> myque1;
    queue<int> myque2;
    queue<int>* data_que;
    queue<int>* bak_que;

public:
    MyStack()
    {
        data_que = &myque1;
        bak_que = &myque2;
    }

    void push(int x)
    {
        bak_que->push(x);
        while (data_que->size()) {
            int data = data_que->front();
            data_que->pop();
            bak_que->push(data);
        }
        queue<int>* tmp;
        tmp = data_que;
        data_que = bak_que;
        bak_que = tmp;
    }

    int pop()
    {
        int data = data_que->front();
        data_que->pop();
        return data;
    }

    int top()
    {
        return data_que->front();
    }

    bool empty()
    {
        return data_que->empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @leet end
