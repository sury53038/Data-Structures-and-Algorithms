#include<bits/stdc++.h>
using namespace std;

int dup(vector<int>arr){
    int i = 0;
    for(int j = i+1; j < arr.size(); j++){
        if(arr[i] == arr[j]){
            return arr[i];
            break;
        }
        else if(j == arr.size()-1){
            i++;
            j = i+1;
        }
    }
}

int main(){

    vector<int>arr = {1,2,3,22,12,23,22};
    cout<<dup(arr);
    return 0;
}