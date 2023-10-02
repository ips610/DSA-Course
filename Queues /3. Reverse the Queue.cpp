#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        // add code here.
        
        stack<int> stack;
        while(!q.empty()){
            int ele = q.front();
            q.pop();
            stack.push(ele);
        }
        
        while(!stack.empty()){
            int ele = stack.top();
            stack.pop();
            q.push(ele);
        }
        
        return q;
    }
};
