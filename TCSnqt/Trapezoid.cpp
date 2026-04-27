// You are given a 3x3 matrix. Determine wheather the matrix forms a trapezoid pattern. 
// A matrix is considered a trapezoid if:
//     The top row has more non-zero elements than the bottom row.
//     (i.e., elements decrease as we move donward forming a trapezoid-like shape)

// Task:
//     If the matrix is a trapezoid -> print sum of first row elements
//     Otherwise -> print product  of first row elements.

// Input
// 3x3 matrix elements
// Output
// Sum or Product of first row

// Example 1:
// Input

// 1 2 3
// 4 5 0
// 6 0 0
// Explanation:
//     Row-wise non-zero count : 3->2->1 (Trapezoid)

// Output
// 6

// Example 2:
// Input
// 1 2 3
// 4 5 6
// 7 8 9
// Explanation
//     Non-zero count: 3->3->3(Not Trapezoid)
// Output
// 6
// (Product = 1x2x3)