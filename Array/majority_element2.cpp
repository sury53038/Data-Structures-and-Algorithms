#include<iostream>
#include<map>
#include<vector>

using namespace std;


class Solution{
    public:
    vector<int>majorityElement(vector<int>& nums){
        map<int,int>mpp;
        for(int i : nums){
            mpp[i]++;
        }
        vector<int>ans;
        for (auto &pair : mpp){
            if(pair.second > nums.size()/3){
                ans.push_back(pair.first);
            }
        }
        return ans;
    }
    void display(const vector<int>&arr){
        for(int i : arr){
            cout<<i<<" ";
        }
    }

};

int main(){
    Solution sn;
    vector<int>arr = {1,1,2,2,3,5,1,2};
    vector<int>a = sn.majorityElement(arr);
    sn.display(a);

    return 0;
}