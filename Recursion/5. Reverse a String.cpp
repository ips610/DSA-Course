#include <iostream>
using namespace std;

void reverse(string &name, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    swap(name[start], name[end]);
    reverse(name, start + 1, end - 1);
}
int main()
{
    string name = "ips";
    reverse(name, 0, name.length() - 1);
    cout << name << endl;

    return 0;
}