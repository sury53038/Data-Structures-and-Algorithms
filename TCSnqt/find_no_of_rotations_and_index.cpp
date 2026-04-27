// Question 2: Find Number of Rotations and Index of Element
// in Original Array
// A sorted array is rotated k times in a clockwise direction.
// Given this rotated array of size N and a target element K:
// 1. Find the number of rotations performed on the original
// sorted array.
// 2. Find the index of element K in the original (sorted)
// array.
// If the element is not present, return -1.

// Input Format
// • First line contains an integer N (size of array)
// • Second line contains N space-separated integers
// (rotated sorted array)

// • Third line contains an integer K (target element)

// Output Format
// • First output: Number of rotations
// • Second output: Index of K in the original sorted array

// Example
// Input
// 7
// 4 5 6 7 1 2 3
// 2
// Output
// 4
// 1

// Explanation
// • Original sorted array: 1 2 3 4 5 6 7
// • Rotated array: 4 5 6 7 1 2 3
// • Number of rotations = index of minimum element = 4
// • Element 2 is at index 1 in original sorted array