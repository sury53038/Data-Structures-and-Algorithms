#include<iostream>
#include<vector>
using namespace std;

void sumequals(vector<int>&arr, vector<int>&ans, int target, int sum, int i, int j){
    if(i == j){
        if(sum == target){
            for(int l = 0; l < ans.size(); l++){
                cout<<ans[l]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    ans.push_back(arr[i]);
    sum = sum+arr[i];
    sumequals(arr, ans, target, sum,i+1, j);
    ans.pop_back();
    sum = sum - arr[i];
    sumequals(arr, ans, target, sum,i+1, j);
}

int main(){

    vector<int>ans;
    vector<int>arr= {1,2,1};
    sumequals(arr, ans, 2,0,0, arr.size());


    return 0;
}