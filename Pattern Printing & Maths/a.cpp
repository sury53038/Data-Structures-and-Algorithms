#include<iostream>
using namespace std;

int main(){
     int s = 0;int p=4;
     for(int i=1;i<p;i++){
        for (int k = 1; k <= (p-s); k++)
        {
            cout << "* ";
            s++;
        }
        cout<<endl;
     }
    return 0;
}