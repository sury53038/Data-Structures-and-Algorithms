#include<iostream>
using namespace std;

void numberstoword(int N, string arr[]){
    if(N == 0){
        return;
    }
    int digit = N % 10;
    N = N / 10;
    numberstoword(N, arr);
    cout<<arr[digit]<<" ";
};

int main(){
    int num;
    cout<<"Enter the digits :: ";
    cin>>num;

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    numberstoword(num, arr);
    return 0;
}