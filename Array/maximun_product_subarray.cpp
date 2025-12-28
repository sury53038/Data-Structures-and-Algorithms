#include<iostream>
#include<vector>
using namespace std;


class Solution {
    public:
    int maxProduct(vector<int>& nums){
        int mul = 1;
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            mul = mul*nums[i];
            ans = max(ans,mul);

            if(mul <= 0){
                mul = 1;
            }
        }
        return ans;
    }
};

int main(){
    vector<int>arr = {-3,-2,-6};

    Solution sn;
    int ans = sn.maxProduct(arr);
    cout<<ans;


    return 0;
}


