#include<iostream>
using namespace std;

int main(){
    int r1,c1;
    cout<<"Enter size :: ";
    cin>>r1>>c1;
    int Mat[r1][c1];
    cout<<"Enter elements :: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>Mat[i][j];
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<Mat[i][j];
        }
        cout<<endl;
    }
    cout<<"\n\nAfter transpose :: "<<endl;
    int T[r1][c1];

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            T[i][j] = Mat[j][i];
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<T[i][j];
        }
        cout<<endl;
    }

    return 0;
}
