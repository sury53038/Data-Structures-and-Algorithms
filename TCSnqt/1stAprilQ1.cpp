// Question 1: Problem Statement
// You are given:
// • An integer N → minimum charge
// required for a laptop to work
// • An array of integers representing
// the charge available in each laptop
// Your task is to count how many laptops
// have charge ≥ N.

// Input Format
// N
// A1 A2 A3 A4 ... An
// • N → minimum required charge
// • Ai → charge of each laptop

// Output Format
// Single integer → number of laptops that
// can work

// Example
// Input
// 5
// 2 3 6 7 1
// Output
// 2
// Explanation
// Only 6 and 7 are ≥ 5
// So, answer = 2

#include<iostream>
using namespace std;

int main(){

    int N;
    cin>>N;
    int charges[N];
    for(int i = 0; i < N; i++){
        cin>>charges[i];
    }
    
    int count = 0;
    for(int i = 0; i < N; i++){
        if(charges[i] >= N) count++;
    }

    cout<<count;

    return 0;
}