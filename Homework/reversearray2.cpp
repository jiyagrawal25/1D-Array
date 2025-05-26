#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;

//Method 2: STL, C++ lib
int main()
{
    int arr[8]={10,20,30,40,50,60,70,80};
    int n= sizeof(arr)/sizeof(arr[0]);       //detemining size of array using the formula

    reverse(arr, arr+n);

    //printing the reverse array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}