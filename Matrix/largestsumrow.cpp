/*largest sum rows in an matrix*/
#include<iostream>
using namespace std;

int main(){
    int arr[3][4];
    cout<<"Enter the matrix :: ";
    for(int i = 0; i<3;i++){
        for(int j = 0; j<4;j++){
            cin>>arr[i][j];
        }
    }
    int row = -1;
    int rowsum = 0, maxi = -1;
    for(int i = 0;i<3;i++){
        rowsum = 0;
        for(int j = 0; j<4;j++){
            cout<<arr[i][j]<<" ";
            rowsum = rowsum + arr[i][j];
        }
        cout << " | "<<rowsum;
        cout<<endl;
        if(rowsum > maxi){
            maxi = rowsum;
            row = i;
        }
    }
    cout<<"Highest sum row :: "<<row+1<<endl;
    cout<<"sum :: "<<rowsum;

    return 0;
}