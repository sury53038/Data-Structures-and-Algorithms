#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    vector<int>rearrangeArray(vector<int>& nums){
        int i = 0, j = 0;
        for(int i = 1; i < nums.size(); i+=2){
            while(nums[j] >= 0 && j < nums.size()){
                j++;
            }
            swap(nums[i], nums[j]);
            for(int i : nums){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        return nums;
    }

};

int main(){
    Solution sn;
    vector<int>arr = {28,-41,22,-8,-37,46,35,-9,18,-6,19,-26,-37,-10,-9,15,14,31};
    vector<int>ans = sn.rearrangeArray(arr);
    for(int i : ans){
        cout<<i<<" ";
    }
    return 0;
}