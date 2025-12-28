#include<iostream>
using namespace std;
int poweroftwo(int N){
    if(N == 0){
        return 1;
    }
    int ans = 2 * poweroftwo(N-1);
}
int main(){

    int n;
    cin>>n;

    cout<<poweroftwo(n);

    return 0;
} 