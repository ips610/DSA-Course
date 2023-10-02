#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={1,3,9,0,8,16,2};
    int n=arr.size();

    for (int i=1;i<n;i++){
        for(int j=0;j<n-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}