#include<iostream>
#include<vector>
using namespace std;

int count_subs(vector<int>&arr, vector<int>&ans, int target, int sum,int count, int i, int n){
    if(i > n){
        if(sum ==  target){
            count++;
            for(int j = 0; j < ans.size(); j++){
                cout<<ans[j]<<" ";
            }
            cout<<endl;
        }
        return count;
    }

    ans.push_back(arr[i]);
    sum += arr[i];
    count = count_subs(arr, ans, target, sum, count, i+1, n);
    ans.pop_back();
    sum -= arr[i];
    count = count_subs(arr, ans, target, sum, count, i+1, n);

    return count;
}


int main(){

    int x;
    cout<<"Enter the size of array :: ";
    cin >> x;
    vector<int>arr(x);
    for(int i = 0; i < x; i++){
        cin>>arr[i];
    }
    vector<int>ans;
    int size = arr.size();
    int target;
    cout<<"Enter the target :: ";
    cin>>target;

    int total = count_subs(arr, ans, target,0, 0, 0, size-1);
    cout<<"\n\nTotal count of sub-sequences with sum "<<target<<" :: "<<total<<endl;

    return 0;
}