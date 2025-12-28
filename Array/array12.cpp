//finding duplicate in an array.
#include<iostream>
using namespace std;

void  findDuplicate(int arr[], int size){
    for (int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if((arr[i]^arr[j])==0){
                //cout<<"ok"<<(arr[i]^arr[j])<<endl;
                cout<< arr[j]<<endl;           
                break;
            }
        }
    }
}

int main(){
    int arr[7]= {1,3,2,3,5,6,7};

    findDuplicate(arr, 7);

    return 0;

}