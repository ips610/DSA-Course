#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {1, 9, 2, 0, 8, 4, 7};
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                // ruk jao
                break;
            }
        }
        arr[j + 1] = temp;
    }
}