// Q1) Problem: Sort Pairs Using Selection Sort
// You are given N pairs of integers. Each pair
// contains two values (a, b).
// Your task is to sort the pairs using Selection
// Sort based on the following rules:
// Sorting Criteria:
// 1.Sort the pairs in ascending order of the
// first element.
// 2.If the first elements are equal, then sort
// based on the second element in
// ascending order.

// Input Format:
// • First line contains an integer N —
// number of pairs.
// • Next N lines each contain two integers a
// and b.

// Output Format:
// • Print the sorted pairs, one per line.

// Example:
// Input:
// 5
// 10 4
// 3 2
// 5 2
// 3 1
// 10 5

// Output:

// 3 1
// 3 2
// 5 2
// 10 4
// 10 5

// Explanation:
// • First sort by first element → (3, 2) and
// (3, 1) come first.
// • Since first elements are equal (3),
// compare second → (3, 1) comes before
// (3, 2).

// Approach (Selection Sort)
// • Iterate through array
// • Select minimum element based on
// condition
// • Swap with current index