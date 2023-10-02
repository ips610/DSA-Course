#include<iostream>
using namespace std;

int main(){
    int arr[10]={1,3,5,2,9,11,7,0,8,6};
    int key = 6;
    for (int i = 0;i<10;i++){
        if (key==arr[i]){
            cout<<"Index is: "<<i<<endl;
        }
    }
}