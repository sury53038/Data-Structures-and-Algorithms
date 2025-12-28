#include<iostream>
#include<vector>

using namespace std;

int longest_subarray(vector<int>&arr, int k){
        int length = 0;
        for(int i = 0; i < arr.size(); i++){
            int sum = arr[i];
            for(int j = i+1; j < arr.size(); j++){
                sum += arr[j];
                if(sum == k){
                    length = max(length,(j-i+1));
                }
            }
        }
    return length;
}


int main(){

    vector<int>arr = {-5, 8, -14, 2, 4, 12};
    int sizee = longest_subarray(arr, -5);
    cout<<sizee;

    return 0;
}