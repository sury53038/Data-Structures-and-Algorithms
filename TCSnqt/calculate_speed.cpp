// Question 1: Calculate Speed (km/h)
// Problem Statement
// You are given distance (in kilometers) and
// time (in minutes).
// • Convert time into hours.
// • Calculate the speed in km/h using the
// formula:
// Speed=DistanceTime (in hours)\text{Speed}
// = \frac{\text{Distance}}{\text{Time (in
// hours)}}Speed=Time (in hours)Distance
// Constraints
// • Time must be in the range 1 to 60
// minutes (inclusive).
// • If time is outside this range → print
// "Error".

// • Output speed should be an integer (floor
// value).

// Example
// Input:
// Distance = 30 km
// Time = 30 minutes
// Output:
// 60
// Explanation:
// Time in hours = 30 / 60 = 0.5
// Speed = 30 / 0.5 = 60 km/h

// Test Cases
// DistanceTimeOutput
// 30 30 60
// 100 50 120
// 10 0 Error
// 45 70 Error