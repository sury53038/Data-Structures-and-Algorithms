// Question 2 Problem: Happy–Sad State Simulation
// You are given an integer N, representing the number of
// people initially in the Happy state.
// At each iteration, people transition between states
// according to the following rules:
// • From Happy state:
// • 70% become Sad
// • 30% remain Happy
// • From Sad state:
// • 50% remain Sad
// • 50% become Happy

// Initially:
// • Happy = N
// • Sad = 0

// Your task is to simulate this process for 4 iterations and print
// the final number of people in:
// • Happy state
// • Sad state

// Input Format
// A single integer:
// N
// Where N is the initial number of Happy people.

// Output Format
// Print two values:
// Final_Happy Final_Sad

// Constraints
// 1 ≤ N ≤ 10^7

// Example
// Input
// 100
// Output
// 36.5625 63.4375

// Explanation
// We apply the transitions 4 times using:
// newHappy = 0.3 * Happy + 0.5 * Sad
// newSad = 0.7 * Happy + 0.5 * Sad