#include <iostream>
#include <array>
#include <vector>

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
}