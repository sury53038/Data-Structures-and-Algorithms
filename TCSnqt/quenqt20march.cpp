// Q2) Find Minimum and Second Minimum
// Spanning Tree
// You are given an undirected weighted
// graph representing cities and connections
// between them.
// Your task is to:
// 1. Find the Minimum Spanning Tree
// (MST)
// • A spanning tree that connects all
// vertices with minimum total weight.

// 2. Find the Second Minimum Spanning
// Tree
// • A spanning tree whose total weight is:
// o Strictly greater than MST
// o Minimum among all such spanning
// trees

// Input Format:
// • First line contains two integers:
// o N → number of cities (vertices)
// o M → number of connections (edges)
// • Next M lines contain:
// o u v w → connection between city u
// and v with weight w

// Output Format:
// • Print two integers:
// o MST weight
// o Second MST weight

// Constraints:
// • 1 ≤ N ≤ 100
// • 1 ≤ M ≤ 1000
// • Graph is connected

// Example:
// Input:
// 4 5
// 1 2 1
// 1 3 2
// 2 3 1
// 2 4 3
// 3 4 4
// Output:
// 5 6

// Explanation:
// • MST edges:

// o (1-2 → 1), (2-3 → 1), (2-4 → 3)
// o Total = 5
// • Second MST:
// o Replace one edge → total = 6