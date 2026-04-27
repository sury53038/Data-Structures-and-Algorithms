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

#include<iostream>
using namespace std;

int main(){
    double N;
    cin>>N;
    
    double happy = N;
    double sad = 0;

    for(int i = 0; i < 4; i++){
       double nh = 0.3 * happy + 0.5 * sad;
       double ns = 0.7 * happy + 0.5 * sad;

       happy = nh;
       sad = ns;
    }
    cout<<happy<<" "<<sad;
    return 0;
}

