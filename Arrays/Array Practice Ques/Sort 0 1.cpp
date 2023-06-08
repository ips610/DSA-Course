#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sortOne(int arr[], int n){
    int i=0,j=n-1;
    while(i<j){
        while(arr[i]==0 && i<j){
            i++;
        }
        while(arr[j]==1 && i<j){
            j--;
        }
        if(i<j){

        swap(arr[i],arr[j]);
        i++;
        j--;
        }
    }
}
int main(){
    int arr[8]={1,1,0,0,0,0,1,0};

    sortOne(arr,8);
    printArray(arr,8);
}