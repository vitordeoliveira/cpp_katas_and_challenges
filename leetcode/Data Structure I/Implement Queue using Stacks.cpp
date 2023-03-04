// Implement a first in first out (FIFO) queue using only two stacks. The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).

// Implement the MyQueue class:

// void push(int x) Pushes element x to the back of the queue.
// int pop() Removes the element from the front of the queue and returns it.
// int peek() Returns the element at the front of the queue.
// boolean empty() Returns true if the queue is empty, false otherwise.
// Notes:

// You must use only standard operations of a stack, which means only push to top, peek/pop from top, size, and is empty operations are valid.
// Depending on your language, the stack may not be supported natively. You may simulate a stack using a list or deque (double-ended queue) as long as you use only a stack's standard operations.
 

// Example 1:

// Input
// ["MyQueue", "push", "push", "peek", "pop", "empty"]
// [[], [1], [2], [], [], []]
// Output
// [null, null, null, 1, 1, false]

// Explanation
// MyQueue myQueue = new MyQueue();
// myQueue.push(1); // queue is: [1]
// myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
// myQueue.peek(); // return 1
// myQueue.pop(); // return 1, queue is [2]
// myQueue.empty(); // return false

#include <stack>
#include <iostream>

using namespace std;

class MyQueue {
public:
    stack<int> s1;
    stack<int> tmp;
    MyQueue() {
    }
    
    void push(int x) {
        s1.push(x);
    }

    stack<int> reverse(stack<int> s){
        clean(tmp);
        while(!s.empty()){
            tmp.push(s.top());
            s.pop();
        }

        return tmp;
    }
    
    int pop() {
        tmp = reverse(s1);
        int element = tmp.top();
        tmp.pop();
        s1 = reverse(tmp);
        return element;
    }
    
    int peek() {
        tmp = reverse(s1);
        int element = tmp.top();
        return element;
    }

    void clean(stack<int> &s){
        while(!s.empty()){
            s.pop();
        }
    }
    
    bool empty() {
        return s1.empty();
    }
};


// class MyQueue {
// public:
//     stack<int> s1;
//     stack<int> tmp;
//     MyQueue() {
//     }
    
//     void push(int x) {
//         if(s1.empty()){
//             s1.push(x);
//             return;
//         }
//         s1.push(x);
//         s1 = reverse(s1);
//     }

//     stack<int> reverse(stack<int> s){
//         clean(tmp);
//         while(!s.empty()){
//             tmp.push(s.top());
//             s.pop();
//         }

//         return tmp;
//     }
    
//     int pop() {
//         int asw = s1.top();
//         s1.pop();
//         return asw;
//     }
    
//     int peek() {
//         return s1.top();
//     }

//     void clean(stack<int> &s){
//         while(!s.empty()){
//             s.pop();
//         }
//     }
    
//     bool empty() {
//         return s1.empty();
//     }
// };

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

int main(){
    MyQueue *a = new MyQueue();

    a->push(1);
    a->push(2);
    a->push(3);
    cout << a->peek() << '\n';
    cout << a->pop() << '\n';
    a->pop();
    
}