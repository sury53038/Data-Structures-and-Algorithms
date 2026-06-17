#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> arr = {4,5,2,23,80};

    for(int i = 0; i < arr.size(); i++){
        for(int j = i; j < arr.size(); j++){
            for(int k = i; k <= j; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }


    return 0;
}