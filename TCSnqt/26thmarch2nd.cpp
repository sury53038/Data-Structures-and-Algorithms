// Question 2: Sandwich Cost Closest to Target
// Problem Statement
// You are given:
// • An array BreadCost[] representing cost of different
// breads
// • An array FillingCost[] representing cost of fillings
// • An integer Target
// You need to make a sandwich such that total cost is closest to
// Target.

// Rules
// 1. You must choose exactly one bread
// 2. You can choose 0, 1, or more fillings

// 3. Each filling can be used at most 2 times
// 4. Return the closest possible cost to Target
// 5. If two costs are equally close, return the smaller one

// Input Format
// • First line: BreadCost array
// • Second line: FillingCost array
// • Third line: Target

// Output Format
// • Print a single integer representing the closest cost

// Example
// Input
// BreadCost = [5,7]
// FillingCost = [2,3]
// Target = 10
// Output
// 10

// Explanation
// Possible combinations:

// • 5 + 2 + 3 = 10
// • 7 + 3 = 10
// Closest = 10