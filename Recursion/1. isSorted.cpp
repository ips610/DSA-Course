#include <iostream>
using namespace std;

int isSorted(int arr[], int size){
    if(size == 1 || size == 0){
        return 1;
    }
    if(arr[0] > arr[1]){
        return 0;
    }
    return isSorted(arr+1,size-1);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout << isSorted(arr,size) << endl;
    return 0;
}