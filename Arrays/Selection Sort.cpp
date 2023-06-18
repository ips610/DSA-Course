#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={1,5,9,7,0,8,2};
    int n=arr.size();
    for (int i=0;i<n-1;i++){
        int minIndex = i;

        for (int j=i+1;j<n;j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
    for (int k=0;k<n;k++){
        cout<<arr[k]<<endl;
    }
}