#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j){
    if (i>j){
        return ;
    }
    if (str[i] != str[j]){
        return false;
    }
    else{
        return checkPalindrome(str, i+1, j-1);
    }
}
int main(){
    string name = "aabbccbbaa";
    cout << endl;
    bool ans = checkPalindrome(name, 0, name.length()-1);

    if (ans){
        cout<< "Palindrome" << endl;

    }
    else{
        cout << "Not Palindrome" << endl;
    }
}