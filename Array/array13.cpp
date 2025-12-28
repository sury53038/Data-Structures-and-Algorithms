// #include<iostream>
// #include<vector>
// using namespace std;

// int findDuplicate(vector<int> &arr){
//     int ans = 0;
//     for(int i= 0;i<arr.size(); i++){
//         ans= ans^arr[i];
//     }
//     for(int i=1;i<arr.size();i++){
//         ans = ans^i;
//     }
//     return ans;
// }
// int main(){
//     return 0;
// }
/*all duplicates*/
#include <iostream>
using namespace std;
void findDuplicate(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if ((arr[i] ^ arr[j]) == 0)
            {
                cout << arr[i] << "\n";
            }
        }
    }
}
int main()
{
    int arr[7] = {11, 11, 13, 7, 7, 8, 13};

    findDuplicate(arr, 7);
    return 0;
}