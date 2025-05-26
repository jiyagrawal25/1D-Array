#include<iostream>
using namespace std;
// bool findTarget(int arr[],int size,int target)
// {
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]==target)
//         {
//             return true;
//         }
//     }
//     return false;
// }
// int main()
// {
//     int arr[100];
//     int size;
//     cout<<"enter the number of elements"<<endl;
//     cin>>size;

//     for(int i=0;i<size;i++)
//     {
//         cout<<"enter the input value for the index:"<<i<<endl;
//         cin>>arr[i];
//     }
//     int target;
//     cout<<"enter the value of target";
//     cin>>target;

//     bool ans=findTarget(arr,size,target);
//     cout<<"ans:"<<ans<<endl;
//     return 0;
// }


bool findTarget(int arr[], int size, int target)
{
    //traverse the entire array
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            //element found
            return true;
        }
    }
    //agar yaha tak aa gye toh matlab pura loop chal chuka hai aur target element nhi mila purey loop mein
    return false;
}

int main()
{
    //taking array as input from user
    // int arr[100];
    // int size;
    // cout<<"enter the number of elements"<<endl;
    // cin>>size;

    // for(int i=0; i<size;i++)
    // {
    //     cout<<"enter the value for index:"<<i<<endl;
    //     cin>>arr[i];
    // }


    int arr[5]={10,20,30,40,50};
    int size=5;
    // int target =50;
    // int target=60;

    //taking target as input from user
    int target;
    cout<<"enter the value of target";
    cin>>target;

    int ans = findTarget(arr,size,target);
    cout<<"ans:"<<ans<<endl;
}
