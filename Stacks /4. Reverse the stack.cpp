#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &stack, int x){
    if (stack.empty()){
        stack.push(x);
        return ;
    }

    int d = stack.top();
    stack.pop();

    insertAtBottom(stack, x);

    stack.push(d);
}
void reverseStack(stack<int> &stack) {
    // Write your code here

    if (stack.empty()){
        return ;
    }

    int num = stack.top();
    stack.pop();

    reverseStack(stack);
    insertAtBottom(stack, num);
}