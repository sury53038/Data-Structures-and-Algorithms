// #include<iostream>
// using namespace std;

// int sumElements(int arr[], int size, int i, int sum){
//     if(i == size){
//         return sum;
//     }
//     sum += arr[i];

//     sum = sumElements(arr, size, ++i, sum);
// }

// int main(){

//     int arr[9] = {1,2,3,4,5,7,11,34,54};
//     int size = 9;
//     int ans = sumElements(arr,size, 0, 0);
//     cout<<ans;
//     return 0;
// }
#include<iostream>
using namespace std;

int sumofEle(int *arr, int size){
    if(size == 0){
        return 0;
    }
    else if(size == 1){
        return arr[0];
    }
    int sumofele = arr[0] + sumofEle(arr+1, size-1);
    return sumofele;

}

int main(){

    int arr[] = {22,55,90,21,34,23,5};
    int ans = sumofEle(arr,7);
    cout<<ans;

    return 0;
}