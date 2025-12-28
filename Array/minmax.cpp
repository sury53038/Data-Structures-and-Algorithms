#include<iostream>
using namespace std;

int findmax(int arr[], int size)
    {
        int max = arr[0];
        int secondlargest;
        for(int i=0;i<size;i++)
        {  
            
            if(max < arr[i])
            {
                secondlargest = max;
                max = arr[i];
            }
            
        }
        cout<<endl<<"2nd largest: "<<secondlargest;
    return max;
    }
int findmin(int arr[], int size)
    {
        int min = arr[0];
        int secondsmallest;
        for(int i=0;i<size;i++)
        {
            if(min > arr[i])
            {
                secondsmallest=min;
                min = arr[i];
            }
        }
        cout<<"\n2nd smallest: "<<secondsmallest<<endl;
    return min;
}

int main(){
    int arr[10];
    cout<<"Enter 10 elements: ";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int x =findmax(arr, 10);
    int y =findmin(arr, 10);
    cout<<"Largest element: "<<x<<endl;
    cout<<"Smallest element: "<<y;

    return 0;
}