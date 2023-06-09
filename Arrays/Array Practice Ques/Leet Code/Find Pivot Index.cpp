//Here Pivot Index is -- at point where left side part sum to it and right side part sum is equal
#include<iostream>
#include<vector>

using namespace std;
int pivotIndex(vector<int>& nums) {
        int total=0, ls=0;
        for (int i=0;i<nums.size();i++){
            total+=nums[i];
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==total-2*ls){
                return i;
            }
            ls+=nums[i];
        }
        return -1;
    }

int main(){
    vector<int> arr={1,7,3,6,5,6};

}