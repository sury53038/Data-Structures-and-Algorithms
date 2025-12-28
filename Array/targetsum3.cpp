#include <iostream>
using namespace std;
int main()
{
    int elements[6];
    cout << "Enter elements: ";
    for (int i = 0; i < 6; i++)
    {
        cin >> elements[i];
    }
    int target_sum = 10;
    int pairs = 0;
    cout << endl;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
            for (int k = j+1; k < 6; k++)
            {
                if (elements[i] + elements[j] + elements[k] == target_sum)
                {
                    cout << elements[i] << "," << elements[j] << "," << elements[k] << endl;
                    pairs++;
                }
            }
        }
    }
    cout << "total pairs: " << pairs;

    return 0;
}