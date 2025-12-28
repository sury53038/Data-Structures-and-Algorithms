#include<iostream>
#include<vector>
using namespace std;
bool one_seq(vector<int> &arr, vector<int> &ans, int target, int sum, int i, int n){
    if(i > n){
        if(sum == target){
            for(int l = 0; l < ans.size(); l++){
                cout<<ans[l]<<" ";
            }
            return true;
        }
        else return false;
    }

    ans.push_back(arr[i]);
    sum += arr[i];

    if(one_seq(arr, ans, target, sum, i+1, n) == true) return true;
    ans.pop_back();
    sum = sum - arr[i];
    if(one_seq(arr, ans, target, sum, i+1, n) == true) return true;

    return false;
        
}
int main(){

    int x;
    cout<<"Eneter the size of array :: ";
    cin>>x;
    vector<int>arr(x);
    for(int i = 0; i < x; i++){
        cin>>arr[i];
    }
    vector<int>ans;
    int target;
    cout<<"Enter the target :: ";
    cin>>target;
    int size = arr.size();
    one_seq(arr, ans, target, 0, 0, size-1);



    return 0;
}