#include<iostream>
using namespace std;
int main(){
    int elements[6];
    cout<<"Enter elements: ";
    for (int i=0;i<6;i++){
        cin>>elements[i];
    }
    int target_sum=12;
    int pairs=0;
    cout<<endl;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(elements[i]+elements[j]==target_sum){
                cout<<elements[i]<<","<<elements[j]<<endl;
                pairs++;
            }
        }
    }
    cout<<"total pairs: "<<pairs;

    return 0;
}