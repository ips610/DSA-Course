#include<iostream>
using namespace std;

int FirstOcc(int arr[], int n, int key){
    int s=0, e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if (arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            s=mid-1;
        }
    }
    return ans;
}

int LastOcc(int arr[], int n, int key){
    int s=0, e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if (arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            s=mid-1;
        }
    }
    return ans;
}
int main(){
    int even[6]={1,2,3,3,5,6};
    cout<<"First Occ: "<<FirstOcc(even,6,3);
    cout<<"Last Occ: "<<LastOcc(even,6,3);
}