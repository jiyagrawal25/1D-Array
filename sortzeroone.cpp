#include<iostream>
#include<algorithm>
using namespace std;

void sortzeroone(int arr[], int n)
{
    int zerocount=0;
    int onecount=0;

    //counting
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            zerocount++;
        }
        if(arr[i]==1)
        {
            onecount++;
        }
    }
    
    // insertion
    // int i=0;
    // for(;i<zerocount;i++)
    // {
    //     arr[i]=0;
    // }
    // for(;i<n;i++)
    // {
    //     arr[i]=1;
    // }

    //using fill method for insertion
    fill(arr, arr+zerocount, 0);
    fill(arr+zerocount, arr+n, 1);
}

// int main()
// {
//     int arr[]={1,0,1,1,0,0,1,1};
//     int size = 8;
//     sortzeroone(arr,size);
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

// }


//method 3 using sort inbuilt function
int main()
{
    
    int arr[]={1,0,1,1,0,0,1,1};
    int size = 8;
    sort(arr, arr+size);   //for sort function we have to include #include<algorithm> header file
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}