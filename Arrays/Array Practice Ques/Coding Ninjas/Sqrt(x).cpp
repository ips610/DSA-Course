#include<iostream>
using namespace std;

long long int BinarySearch(int n){
    if (n==0){
        return n;
    }
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    if (n==0 || n<1){
        return 0;
    }
    long long int ans=-1;
    while(s<=e){
        long long int square=mid*mid;
        if (square==n){
            return mid;
        }
        else if(square<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
    
}
    int mySqrt(int x) {
        return BinarySearch(x);
    }
int main(){
    mySqrt(10);
}