#include <iostream>
using namespace std;

int RecSum(int arr[], int size){
    if(size == 1){
        return arr[0];
    }
    
    return arr[0] + RecSum(arr+1,size-1);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout << RecSum(arr,size) << endl;
    return 0;
}