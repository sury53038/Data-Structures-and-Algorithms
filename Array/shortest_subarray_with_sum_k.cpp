#include<iostream>
#include<vector>

using namespace std;

int shortestSubarray(vector<int>& arr, int k) {
    int length = INT16_MAX;
    if(length == 0){
        return -1;
    }
    else if(length == 1){
        if(arr[0] == k){
            return 1;
        }
        else{
            return -1;
        }
    }
    for(int i = 0; i < arr.size(); i++){
        int sum = 0;
        for(int j = i+1; j < arr.size(); j++){
            sum += arr[j];
            if(sum == k){
                int len = j-i+1;
                if(len > 0){
                    length = min(length, len);
                }
            }
        }
    }
    if(length == INT16_MAX){
        return -1;
    }
    return length;
}


int main(){
    vector<int>arr = {2,-1,2};
    int ans = shortestSubarray(arr, 3);
    cout<<ans;

    return 0;
}