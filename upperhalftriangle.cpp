#include<iostream>
using namespace std;

void sortPairs(int arr[], int n)
{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=i-1;j>=0;j--)
        {
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[100];
    int n;
    cout<<"enter the size of array";
    cin>>n;
    for(int i=0; i<n ;i++)
    {
        cout<<"enter the value for index "<<i<<endl;
        cin>>arr[i];
    }
    sortPairs(arr,n);
}