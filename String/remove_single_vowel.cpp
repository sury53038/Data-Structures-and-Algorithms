#include<iostream>
#include<vector>

using namespace std;

bool keep(string &str, int j){
    string vow = {'a','e','i','o','u'};
    int n = vow.size();
    for(int i = 0; i < n; i++){
        if(str[j] == vow[i]){
            if(j > 0 && j < str.size()-1){
                for(int k = 0; k < n; k++){
                    if(str[j-1] == vow[k] || str[j+1] == vow[k]){
                        return true;
                    }
                }
            }
            else if(j == 0){
                for(int p = 0; p < n; p++){
                    if(str[j+1] == vow[p]){
                        return true;
                    }
                }
            }
            else if(j == str.size()-1){
                for(int m = 0; m < n; m++){
                    if(str[j-1] == vow[m]){
                        return true;
                    }
                }
            }
        }
    }
    return false;
}
int main(){

    string str = "abcdefii";
    string ans = "";
    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            if(!keep(str, i)){
                continue;
            }
        }
        ans.push_back(str[i]);
        
    }
    for(int i=0; i < ans.size(); i++){
        cout<<ans[i];
    }

    return 0;
}