// Q2) Transaction Monitoring System
// Problem Statement
// You are building a Transaction Monitoring
// System for a financial platform.
// The system processes N transactions. Each
// transaction contains the following 4
// parameters:
// • sender (string)
// • receiver (string)
// • timestamp (integer, in seconds)
// • amount (integer)
// Rules
// 1. Duplicate Transaction Check
// If any transaction has the same sender
// AND receiver as a previous transaction,
// print:
// Error: Duplicate Transaction

// and terminate the program.
// 2. Fraud Detection Rule
// If the difference between timestamps of
// any two consecutive transactions is
// greater than 60 seconds, print:
// Fraud Detected
// and terminate the program.
// 3. If all transactions are valid, print:
// All Transactions Valid

// Input Format
// • First line: Integer N (number of
// transactions)
// • Next N lines:
// Each line contains:
// sender receiver timestamp amount

// Output Format
// • Print one of the following:

// o "Error: Duplicate Transaction"
// o "Fraud Detected"
// o "All Transactions Valid"

// Constraints
// • 1 ≤ N ≤ 10^5
// • timestamp ≥ 0
// • amount ≥ 0

// Sample Test Cases
// Test Case 1 (Valid Transactions)
// Input:
// 3
// A B 10 100
// C D 50 200
// E F 100 300
// Output:
// All Transactions Valid

// Test Case 2 (Duplicate Sender-Receiver)
// Input:
// 3
// A B 10 100
// C D 50 200
// A B 70 300
// Output:
// Error: Duplicate Transaction

// Test Case 3 (Fraud Detection)
// Input:
// 3
// A B 10 100
// C D 50 200
// E F 200 300
// Output:
// Fraud Detected