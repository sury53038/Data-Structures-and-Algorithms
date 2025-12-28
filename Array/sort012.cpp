#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
  void sortColors(vector<int>& nums){
    int zero = 0, one = 0, two = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 0){
            zero++;
        }
        else if(nums[i] == 1){
            one++;
        }
        else{
            two++;
        }
    }
    int i = 0;
    for(; i < zero; i++){
        nums[i] = 0;
    }
    for(; i < (zero + one); i++){
        nums[i] = 1;
    }
    for(; i < (zero+one+two); i++){
        nums[i] = 2;
    }
  }
  void display(const vector<int>& nums){
    for(int num : nums){
        cout<<num<<" ";
    }
  }
  
};

int main(){
    
    vector<int>arr = {1,2,2,1,0,0,1};

    Solution s;
    s.sortColors(arr);
    s.display(arr);

    return 0;
}