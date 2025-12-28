#include<iostream>
using namespace std;

     void patte(int x){
        int l,k=0,count;
        for(int i=1;i<=x;i++){
            for(int j=1;j<=x-k;j++){
                cout<<(i+j-1)<<" ";
            }
            count =1;
            for(int l=1;l<=i-1;l++){
                cout<<count<<" ";
                count++;
            }
            
            cout<<endl;
            k++;
        }
     }
// void patte(int n)
// {
//     int count;
//     void patt(int n);
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = i; j <= n; j++)
//             {
//                 cout << j << " ";
//             }
//             for (int k = 1; k < i; k++)
//             {
//                 cout << k << " ";
//             }
//             cout << endl;
//         }
//     }
// }
/////////////
// void patte(int n){
//     int count ;
//     for(int i=1;i<=n;i++){
//         count=i;
//         for(int j=1;j<=n-i+1;j++){
//             cout<<count;
//             count++;
      
//         }
//         for(int k=1;k<i;k++)
//         {
//             cout<<k;
//         }
          
//         cout<<endl;
//     }
        
//     }

int main(){
    int p;
    cout<<"Enter limit: ";
    cin>>p;
    patte(p);
    return 0;
}