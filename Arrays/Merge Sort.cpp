#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy left part in new array

    int index = s;
    for (int i = 0; i <= len1; i++)
    {
        first[i] = arr[index++];
    }

    // copy right part in new array

    index = mid + 1;
    for (int i = 0; i <= len2; i++)
    {
        second[i] = arr[index++];
    }

    // merge 2 sorted arrays

    int index1 = 0;
    int index2 = 0;
    index = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[index++] = first[index1++];
        }
        else
        {
            arr[index++] = second[index2++];
        }
    }
    while (index1 < len1){
        arr[index++] = first[index1++];
    }

    while (index2 < len2){
        arr[index++] = second[index2++];
    }

    delete []first;
    delete []second;
}

void mergeSort(int *arr, int s, int e)
{

    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;

    // left part

    mergeSort(arr, s, mid);

    // right part

    mergeSort(arr, mid + 1, e);

    // merge

    merge(arr, s, e);
}
int main()
{

    int arr[5] = {2, 9, 0, 7, 5};
    int size = 5;

    int start = 0;
    int end = size - 1;
    mergeSort(arr, start, end);

    for (int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}