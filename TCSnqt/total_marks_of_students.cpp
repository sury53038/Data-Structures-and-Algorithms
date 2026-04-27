// Question 1: Total Marks of a Student
// Problem Statement
// You are given a 2D matrix representing
// marks of students. Each row represents a
// student, and each column represents marks
// in exams:
// • Column 0 → Internal exam marks
// • Column 1 → External exam marks
// You are also given an index (i, j)
// representing a student’s position in the
// matrix.
// Task
// Calculate the total marks (internal +
// external) of the student at the given index.

// Input Explanation

// 1.Two integers R and C representing
// number of rows and columns.
// 2.A 2D matrix of size R × C containing
// marks.
// 3.Two integers i and j representing the
// index of the student.
// Note: Even though both i and j are given,
// the student is identified by row i. The
// marks are taken from column 0 and column
// 1.

// Output Explanation
// • Print the sum of internal and external
// marks of the selected student.
// • If the index is invalid (out of bounds),
// print "Invalid Input".

// Example
// Input

// 2 2
// 40 50
// 30 60
// 1 1
// Explanation
// • Matrix:
// [40 50]
// [30 60]
// • Student at index (1,1) → row = 1
// • Internal = 30, External = 60
// • Total = 30 + 60 = 90
// Output
// 90