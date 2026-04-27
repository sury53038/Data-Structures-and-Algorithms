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