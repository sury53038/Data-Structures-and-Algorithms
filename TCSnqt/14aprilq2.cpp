// Question 2) Minimum Cost to Connect All Nodes (Kruskal’s
// Algorithm)
// Problem Statement
// You are given a graph with n nodes and m edges. Each edge
// has a weight. Your task is to find the minimum cost to
// connect all nodes using Kruskal’s Algorithm.
// If it is not possible to connect all nodes, return -1.

// Input Format
// n m
// u1 v1 w1
// u2 v2 w2
// ...
// um vm wm
// • n → number of nodes

// • m → number of edges
// • ui, vi → nodes connected
// • wi → weight of edge

// Output Format
// minimum_cost

// Example
// Input
// 4 5
// 0 1 10
// 0 2 6
// 0 3 5
// 1 3 15
// 2 3 4
// Output
// 19
// Explanation
// Edges chosen:
// • (2,3) → 4
// • (0,3) → 5
// • (0,1) → 10
// Total = 4 + 5 + 10 = 19