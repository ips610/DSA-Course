#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);
        if (n == ans)
        {
            cout << "True" << endl;
        }
    }
    cout << "False" << endl;
}
