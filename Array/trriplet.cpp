#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	vector<vector<int>>ans;
	for(int i=0;i<n;i++)
	{
        for (int j = i + 1; j < n; j++) 
		{
            for (int k = j + 1; k < n; k++)
			{
				if((arr[i]+arr[j]+arr[k])==K)
				{
					vector<int>temp;
					temp.push_back(i);
					temp.push_back(j);
					temp.push_back(k);
					ans.push_back(temp);
				}
			}
          
    	}
	}
	return ans;
}

int main(){
    vector<int>arr={1,2,3,1,2,3};
    findTriplets(arr, 6, 5);
    return 0;
    
}