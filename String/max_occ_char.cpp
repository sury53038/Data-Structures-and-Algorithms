#include<iostream>
using namespace std;

int main(){
    int num;
    int maxi = -1;
    int index = -1;
    string str;
    cout<<"Enter a string :: ";
    cin>>str;
    int arr[26] = {0};

    for(int i = 0;i < str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            num = str[i] - 'a';
            arr[num]++;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            num = str[i] - 'A';
            arr[num]++;
        }
    }
    int cntt = 0;
    for(int j = 0; j<26;j++){
        // if(arr[j] == arr[j+1]){
        //     cntt++;
        // }
        if(arr[j] > maxi){
            maxi = arr[j];
            index = j;
        }
    }
    char p = 'a' + index;
    // if(cntt == str.length()){
    //     cout<<"\nall occurences are same";
    // }
    // else{
        cout<<"max occuring character :: "<<(p);
    // }
    
    return 0;
}