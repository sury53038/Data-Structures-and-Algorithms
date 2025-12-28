#include<iostream>
using namespace std;

bool palin_str(string word, int i, int j){
    if(i >= j){
        return true;
    }

    if(word[i] != word[j]) return false;
    return palin_str(word, ++i, --j);
}

int main(){

    string word;
    getline(cin,word);
    cout<<"\nYou entered :: "<<word<<endl;
    bool ans = palin_str(word, 0, word.size()-1);
    if(ans)
    cout<<"yes"<<endl;
    else
    cout<<"not palindrome"<<endl;
    return 0;
}