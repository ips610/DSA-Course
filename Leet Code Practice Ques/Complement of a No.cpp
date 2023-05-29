#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m=n;
    int mask = 0;

    if (n == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        while (n != 0)
        {

            mask = (mask << 1) | 1;
            n = n >> 1;
        }
        int ans = (~m) & mask;
        cout << ans << endl;
    }
}