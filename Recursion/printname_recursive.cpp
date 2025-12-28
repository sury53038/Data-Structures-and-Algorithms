// #include<iostream>
// using namespace std;

// void printName(int i, int n){
//     if(i > n){
//         return;
//     }
//     cout<<"surya is my name"<<endl;
//     printName(i+1,n);
// }

// int main(){
// int n;
// cin>>n;
// printName(1,n);
// return 0;
// }

#include<iostream>
using namespace std;

void print_upto_n(int i, int n){
    if(i > n)return;
cout<<n<<endl;

    print_upto_n(i,--n);
    
}
int main(){

    int n;
    cin>>n;
    cout<<endl;
    print_upto_n(1,n);

    return 0;
}