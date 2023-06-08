#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 5};
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }
    cout<<ans<<endl;
}