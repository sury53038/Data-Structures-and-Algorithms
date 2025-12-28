#include<iostream>
#include<vector>
using namespace std;

void printSS(vector<int>&arr,vector<int>&ans, int i, int n){
    if(i > n){
        for(int l = 0; l < ans.size(); l++){
            cout<<ans[l]<<" ";
        }
        cout<<endl;
        return;
    }
    ans.push_back(arr[i]);
    printSS(arr, ans, i+1, n);
    ans.pop_back();
    printSS(arr, ans, i+1, n);
}

int main(){

    int limit;
    cout<<"size of array :: ";
    cin>>limit;
    vector<int> arr(limit,0);
    vector<int> ans;
    for(int i = 0; i < limit; i++){
        cin>>arr[i];
    }
    printSS(arr, ans, 0, limit-1);



    return 0;
}