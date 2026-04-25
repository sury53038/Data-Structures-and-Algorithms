// Your are given two integers start and end.
// A number is called a Cryptic number if it satisfies all teh following conditions:
//     1. It's divisible by 7.
//     2. It's not divisible by 5.
//     3. It's not a palindrome.
//     4. It contains no repeated digits.
// Your task is to print all the cryptic numbers in the given range[start, end](inclusive).


#include<iostream>
#include<unordered_map>
using namespace std;

bool divBySeven(int num){
    return (num % 7 == 0);
}

bool divByFive(int num){
    return (num % 5 != 0);
}

bool palindrome(int num){
    int original = num;
    int val = 0;
    while(num > 0){
        int digit = num % 10;
        val = (val*10) + digit;
        num = num/10;
    }

    return (val != original);
}

bool repeatedDigits(int num){
    unordered_map <int,int>mpp;
    int original = num;

    while(original > 0){
        int digit = original % 10;
        if(mpp[digit] != 0) return false;
        mpp[digit]++;
        original /= 10;
    }
    return true;
}

int main(){
    int num1 = 10;
    int num2 = 100;
    cout<<"Output"<<endl;

    for(int i = num1; i <= num2; i++){
        if(divBySeven(i) && divByFive(i) && palindrome(i) && repeatedDigits(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}

