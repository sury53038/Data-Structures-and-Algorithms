// Question 2: Group Formation Based on Efficiency
// Problem Statement
// You are given efficiencies of n people. You need to form
// groups of size t.
// If some people are left (i.e., n is not divisible by t), those
// extra people are removed.
// For each group:

// • Find the difference between the highest and lowest
// efficiency.
// Task
// Return the maximum difference among all groups.

// Input Explanation
// 1. Integer n → number of people
// 2. Array of n integers → efficiencies
// 3. Integer t → size of each group

// Output Explanation
// • Form groups of size t after sorting the array.
// • For each group, compute:
// difference = max element - min element
// • Print the maximum difference among all groups.
// • If input is invalid, print "Invalid Input".

// Example
// Input
// 6
// 1 3 4 9 10 12
// 2
// Explanation

// • Sorted array: [1, 3, 4, 9, 10, 12]
// • Groups:
// o (1, 3) → difference = 2
// o (4, 9) → difference = 5
// o (10, 12) → difference = 2
// • Maximum difference = 5
// Output
// 5