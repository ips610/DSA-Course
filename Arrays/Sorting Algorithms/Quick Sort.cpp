#include <iostream>
using namespace std;

int partition(int *arr,int s,int e){

    int pivot = arr[s];

    int count = 0;

    for (int i = s+1; i<e; i++){
        if (arr[i] <= pivot){
            count++;
        }
    }

    //place pivot index at right place
    int pivotIndex = s + count;
    swap(arr[pivotIndex],arr[count]);

    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex){

        while (i < pivotIndex){
            i++;
        }

        while (j > pivotIndex){
            j--;
        }

        if (i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }   

    return pivotIndex;
}
void quickSort(int *arr, int s, int e){
    
    if (s>=e){
        return ;
    }

    int p = partition(arr, s, e);
    
    quickSort(arr, s, p-1);

    quickSort(arr, p+1, e);
}

int main(){

    int arr[5] = {3,5,9,0,1};
    int size = 5;
    
    int start = 0;
    int end = size - 1;

    quickSort(arr, start, end);

    for (int i = 0 ; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
}