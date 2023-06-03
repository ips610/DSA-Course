#include<iostream>
using namespace std;

int main(){
    int arr[9]={1,3,4,5,2,3,4,1,2};

    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    for (int i=0;i<9;i+=2){
        if(arr[i]!=arr[i+1]){
            cout<<arr[i]<<endl;
        }
    }
}

/*
int findUnique(int *arr, int size)
{
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
*/