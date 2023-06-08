//Two Sorted Arrays are there

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr1,arr2;
    //arr1 and arr2 - positve arrays with size n and m
    int n=arr1.size(), m=arr2.size();
    vector<int> ans;
	for (int i = 0;i<n;i++){
		int element=arr1[i];

		for (int j=0;j<m;j++){

            if (element < arr2[j]){
				break;
			}

			if (element==arr2[j]){
				ans.push_back(element);
				arr2[j]=-1;
				break;
			}
		}
	}
	// return ans;


    //Two Pointer Approach -- Better Approach as less time complexity
    vector<int> ans;
	int i=0,j=0;
	while (i<n && j<m){
		if (arr1[i]<arr2[j]){
			i++;
		}
		if(arr1[i]==arr2[j]){
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
		if(arr1[i]>arr2[j]){
			j++;
		}
	}
	
	// return ans;
}