#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int p, q, r;
    int ans = 0;
    int i = 0;
    cout << "Enter number: ";
    cin >> p;
    while (p != 0)
    {
        q = p & 1;
        ans = q * (pow(10, i)) + ans;
        p = p >> 1;
    }
    int s,t =0,v=0,u;
    while(ans != 0){
        s = !ans;
        t = s*pow(10,v)+ t;
        ans=ans>>1;
    }
    cout<<v;
    return 0;
}