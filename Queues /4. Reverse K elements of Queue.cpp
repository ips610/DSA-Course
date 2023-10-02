#include <iostream>
#include <stack>
#include <queue>
using namespace std;

queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    
    stack<int> s;
    for (int i=0;i<k;i++){
        int ele = q.front();
        q.pop();
        s.push(ele);
    }
    
    for (int i = 0; i<k;i++){
        int ele = s.top();
        s.pop();
        q.push(ele);
    }
    
    int t=q.size()-k;
    while(t--){
        int ele = q.front();
        q.pop();
        q.push(ele);
    }
    
    return q;
}