#include<iostream>
#include<algorithm>
using namespace std;
void Flip(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==1)
        {
            arr[i]=-1;
        }
    }
    
}
int main()
{ 
    int arr[100];
    int size;
    cout<<"enter the size of the array";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    Flip(arr, size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}