// Question 1:
// Modified Quick Sort – Find Pivot Index
// Problem Statement
// You are given an array of integers. Implement a
// modified Quick Sort partition step to determine
// the pivot index after placing the pivot element in
// its correct sorted position.
// The pivot is chosen as the last element of the
// array. Rearrange the array such that:
// • All elements smaller than the pivot are on
// the left
// • All elements greater than or equal to the
// pivot are on the right
// Return the final index of the pivot.

// Input Format

// n
// a1 a2 a3 ... an
// • n → size of array
// • ai → elements of array

// Output Format
// pivot_index

// Example
// Input
// 5
// 4 2 7 1 3
// Process
// Pivot = 3
// After partition → [2, 1, 3, 4, 7]
// Output
// 2