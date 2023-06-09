#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 2, 1};
    int s = 0;
    int e = arr.size() - 1;

    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            s = mid;
            break;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;

        // if(arr[mid]<arr[mid+1]){
        //         s=mid+1;
        //     }
        //     else{
        //         e=mid;

        //     }
        //     mid=s+(e-s)/2;
    }
    cout << s << endl;
}