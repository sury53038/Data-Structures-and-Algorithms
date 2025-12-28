// search if a given element is present in the array or not.if it is no present then return -1 else return the index.
#include <iostream>
using namespace std;
int main()
{
    int array[5];
    int key, ans = -1;
    cout << "Enter the 5 elements of the array: \n";
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }
    cout << "Enter the key to match: ";
    cin >> key;
    for (int i = 0; i < 5; i++)
    {
        if (array[i] == key)
        {
            ans = i;
            cout<<"Match found.Element "<<ans+1<<endl;
            break;
        }
        else{
            break;
        }
    }
    cout << "\nNo match found."<<ans;
    return 0;
}