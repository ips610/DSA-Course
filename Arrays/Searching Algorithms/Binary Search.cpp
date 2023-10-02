#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;

    // int mid=(start+end)/2;
    int mid=start+(end-start)/2;

    while(start<=end){
        if (arr[mid]==key){
            return mid;
        }
        //go to right part -- key > arr[mid]
        if(key>arr[mid]){
            start=mid+1;
        }
        //go to left part -- key < arr[mid]
        else{
            end=mid-1;
        }
        // mid=(start+end)/2;
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    int even[6]={2,4,6,8,10,12};
    int odd[5]={1,3,5,7,9};

    int index=BinarySearch(even,6,10);
    cout<<index<<endl;
}