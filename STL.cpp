#include <iostream>
#include <array>
#include <vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>

using namespace std;

int main()
{

    // Array

    int basic[3] = {1, 2, 3};

    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Element at 2nd Index: " << a.at(2) << endl;
    cout << "Empty or Not: " << a.empty() << endl;

    cout << "First Element: " << a.front() << endl;
    cout << "Last Element: " << a.back() << endl;



    // Vector



    vector<int> v;
    cout << "Size -> " << v.size() << endl;
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Size -> " << v.size() << endl;
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Size -> " << v.size() << endl;
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Size -> " << v.size() << endl;
    cout << "Capacity -> " << v.capacity() << endl;

    cout << "Element at index 2: " << v.at(2) << endl;
    cout << "Front Element: " << v.front() << endl;
    cout << "Last Element: " << v.back() << endl;
    v.pop_back();
    cout << "Popped Element: " << endl;


    cout << "Size -> " << v.size() << endl;
    cout << "Capacity -> " << v.capacity() << endl;
    v.clear();
    cout << "Size -> " << v.size() << endl;
    cout << "Capacity -> " << v.capacity() << endl;

    vector <int> v1(5,1); //5 shows the size of vector,  1 shows that all the elements of vector will be initialized by 1
    for (int i=0;i<v1.size();i++){
        cout<<v1[i]<<endl;
    }
    vector <int> v2(v1);
    
    for (int i=0;i<v1.size();i++){
        cout<<v1[i]<<endl;
    }



    //Deque


    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    cout<<d.size()<<endl;
    cout<<d.max_size()<<endl;
    // cout<<d.__capacity()<<endl;

    cout<<"Element at First Index: "<<d.at(1)<<endl;
    cout<<"Empty or Not: "<<d.empty()<<endl;

    for(int i:d){
        cout<<i<<endl;
    }
    
    cout<<d.size()<<endl;
    cout<<d.max_size()<<endl;
    // cout<<d.__capacity()<<endl;

    d.erase(d.begin(), d.begin()+1);

    for(int i:d){
        cout<<i<<endl;
    }
    cout<<d.size()<<endl;
    cout<<d.max_size()<<endl;
    // cout<<d.__capacity()<<endl;


    
    //list


    list<int> l;
    l.push_back(1);
    l.push_front(2);

    cout<< "Size: "<<l.size()<<endl;
    for (int i:l){
        cout<<i<<endl;
    }
    l.erase(l.begin());
    for (int i:l){
        cout<<i<<endl;
    }
    cout<<"Size: "<<l.size()<<endl;



    //stack


    stack<string> s;
    s.push("IPS");
    s.push("GPS");
    s.push("AK");
    cout<<"Size: "<<s.size()<<endl;
    cout<<"Top is: "<<s.top()<<endl;
    s.pop();
    cout<<"Top is: "<<s.top()<<endl;
    cout<<"Size: "<<s.size()<<endl;



    //queue


    queue<string> q;

    q.push("IPS");
    q.push("GPS");
    q.push("AK");

    cout<<"Size: "<<q.size()<<endl;
    cout<<"Front is: "<<q.front()<<endl;
    q.pop();
    cout<<"Size: "<<q.size()<<endl;
    cout<<"Front is: "<<q.front()<<endl;


    //priority queue


    priority_queue<int> maxi; //greatest element will return first -- max heap
    priority_queue<int,vector<int>, greater<int> > mini; //smallest element will return first -- min heap

    maxi.push(1);
    maxi.push(5);
    maxi.push(3);
    maxi.push(0);

    int maxisize=maxi.size();
    for (int i=0;i<maxisize;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(1);
    mini.push(5);
    mini.push(3);
    mini.push(0);

    int minisize=mini.size();
    for (int i=0;i<minisize;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    
    cout<<endl;

    
}