// You are given marks of N students in M subjects.

// Your task is to:
//     1. Calculate the average marks of each subject.
//     2. Count the number of students who have scored strictly more than the average in at least one subject.

// You must use a 2D array for storing marks.

#include<iostream>
#include<vector>
using namespace std;

int calculate(vector<vector<double>>& marks){
    int m = marks.size(); //students
    int n = marks[0].size(); //subjects

    int counter = 0;

    vector<double> averageofsubs(n, 0);

    for(int i = 0; i < n; i++){
        double subi = 0;
        for(int j = 0; j < m; j++){
            subi += marks[j][i];
        }
        averageofsubs[i] = subi/m;
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(marks[i][j] > averageofsubs[j]){
                counter++;
                break;
            }
        }
    }

    return counter;
}

int main(){
    int m = 3, n = 5;
    vector<vector<double>> marks(m, vector<double>(n));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            marks[i][j] = 100-(i*j); //this is for randomly filling the marks table;
        }
    }
    int ans = calculate(marks);
    cout<<ans;

    return 0;
}