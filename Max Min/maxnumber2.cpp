#include<iostream>
using namespace std;

int findMax(int arr[], int size)
{
    int ans=arr[0];  
    for(int i=0;i<size;i++)
    {
        if(arr[i]>ans)
        {
            ans = arr[i];
        }
        
    }
    return ans;
}

int main()
{
    int arr[100];
    int size;
    cout<<"enter the number of elements you want to insert ";
    cin>>size;

    for(int i=0;i<size;i++)
    {
        cout<<"enter the value for index:"<<i<<endl;
        cin>>arr[i];
    }

    int finalans = findMax(arr,size);
    cout<<"finalans:"<<finalans<<endl;
}