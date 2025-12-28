#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<vector<int>>V(4,vector<int>(4));
    cout<<"Enter elements for the matrix(4X4) :: "<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>V[i][j];
        }
    }
    cout<<endl;
    cout<<"Entered matrix is :: "<<endl;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<V[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<endl;
    int row = V.size();
    int col = V[0].size();
    int count = 0;
    int total = row*col;
    vector<int> ans;
    int irow = 0;
    int icol = 0;
    int erow = row - 1;
    int ecol = col - 1;
    while(count < total){
        for(int index = icol; index <= ecol; index++){
            ans.push_back(V[irow][index]);
            count++;
        }
        irow++;
        for(int index = irow; index<=erow;index++){
            ans.push_back(V[index][ecol]);
            count++;
        }
        ecol--;
        for(int index = ecol; index >= icol; index--){
            ans.push_back(V[erow][index]);
            count++;
        }
        erow--;
        for(int index = erow;index >= irow; index--){
            ans.push_back(V[index][icol]);
            count++;
        }
        icol++;
    }
    cout<<endl;
    int itr = 0;
    cout<<"Matrix in spiral form :: "<<endl;
    for(int i = 0 ; i < total; i++){
        cout<<ans[i] << " ";
        }
    
    return 0;
}