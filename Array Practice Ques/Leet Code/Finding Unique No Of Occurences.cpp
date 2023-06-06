#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(1);
    vector<int> ans;
    int count;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size();)
    {
        while (arr[i] == arr[i + 1])
        {
            count++;
        }
        ans.push_back(count);
        i += count;
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] == ans[i + 1])
        {
            cout<<"False"<<endl;
        }
        else
        {
            cout<<"True"<<endl;
        }
    }
}