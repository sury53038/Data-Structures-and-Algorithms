// Question 2) Minimum Row Sum with Cost Replacement
// Problem Statement:
// You are given:
// • An integer n
// • An array cost[] of size n
// • An n × n symmetric matrix where diagonal elements
// are 0
// For each row:
// • Replace the diagonal element (0) with cost[i]
// • Compute the sum of that row
// Return the minimum row sum among all rows.
// Input Format:
// • First line: Integer n
// • Second line: n space-separated integers (cost array)

// • Next n lines: n integers each (matrix)
// Output Format:
// • Single integer → minimum row sum
// Example:
// Input:
// 3
// 5 6 7
// 0 1 3
// 1 0 2
// 3 2 0
// Output:
// 9
// Explanation:
// Row 0 → replace 0 with 5 → [5,1,3] → sum = 9
// Row 1 → replace 0 with 6 → [1,6,2] → sum = 9
// Row 2 → replace 0 with 7 → [3,2,7] → sum = 12
// Minimum = 9

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Size :: ";
    cin>>n;

    vector<int>cost(n);
    for(int i = 0; i < n; i++){
        cout<<"Cost["<<i<<"] "<<endl;
        cin>>cost[i];
    }
    cout<<"Enter matrix :: "<<endl;
    vector<vector<int>>matrix(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }
    cout<<"Matrix Input Complete "<<endl;

    
    int ans = INT_MAX;

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            if(matrix[i][j] == 0){
                sum += cost[i];
            }
            else{
                sum += matrix[i][j];
            }
        }
        ans = min(ans, sum);
    }
    cout<<ans;

    return 0;
}