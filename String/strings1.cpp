#include<iostream>
using namespace std;
// int getlength(char name[]){
//     int count = 0;
//     for(int i = 0; name[i] != '\0'; i++){
//         count++;
//     }
//     return count;
// }
string sweater(string x){
    int s = 0;
    int e = x.length()-1;
    while(s <= e){
        swap(x[s], x[e]);
        s++;
        e--;
    }
    return x;
}
int main(){
    // char name[20];
    // cout<<"Enter your name :: "<<endl;
    // cin >> name;
    // cout<<"\nYour name is "<<name;
    // cout<<"\nlength :: "<<getlength(name);
    string ch;
    cout<<"Enter a string :: ";
    cin>>ch;

    cout<<"\nReversed :: "<<sweater(ch);
    return 0;
}