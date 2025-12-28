#include<iostream>
using namespace std;

bool checkpal(string &s, int j, int i){
    if(i >= j) return true;

    if(s[i] != s[j]){
        return false;
    }
    
    
    return checkpal(s,i+1,j-1);
}

int main(){

    string s = "abcddcdba";
    int size = s.size();
    bool ans =checkpal(s,size-1,0);
    if(ans){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"not Palindrome";
    }


    return 0;
}