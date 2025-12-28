#include<iostream>
using namespace std;
// int main(){                                 
//     int arr[7];
//     cout<<"Enter elements: ";
//     for(int i=0;i<7;i++){
//         cin>>arr[i];
//     }
    
//     cout<<endl;
//     for(int i=0;i<7;i++){
//         for(int j=i+1;j<7;j++){
//             if(arr[i]==arr[j]){
//                 arr[i]=arr[j]= -1;
//             }
//         }
//     }
//     for(int k=0;k<7;k++){
//         if(arr[k]>=0){
//             cout<<endl<<arr[k];
//         }
//     }
int main(){
    int arr[7];
    cout<<"elements: "<<endl;
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    int num=0;
    for(int j=0;j<7;j++){
        num=(num^arr[j]);
    }
    cout<<"Unique: "<<num;
    return 0;
}