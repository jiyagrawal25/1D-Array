#include<iostream>
#include<limits.h>
using namespace std;

int findMin(int arr[], int size)
{
    int ans=INT_MAX;  //to use INT_MAX we have to add #include<limits.h> header file
    for(int i=0;i<size;i++)
    {
        if(arr[i]<ans)
        {
            ans = arr[i];
            //can also use in built min function 
            //ans = min(ans, arr[i]);
            //toh jo bhi ans aur arr[i] mein se chota hoga vo ans mein store ho jaega
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

    int finalans = findMin(arr,size);
    cout<<"finalans:"<<finalans<<endl;
}