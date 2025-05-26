#include<iostream>
using namespace std;
// void reverse(int arr[],int size)
// {
//         for(int i= size-1; i>=0;i--)
//         {
//             cout<<arr[i]<<" ";
//         }
// }

// int main()
// {
//     int arr[100];
//     int size;
//     cout<<"enter the number of elements you want to insert";
//     cin>>size;

//     for(int i=0;i<size;i++)
//     {
//         cout<<"enter the value for index:"<<i<<endl;
//         cin>>arr[i];
//     }
//     reverse(arr,size);
// }


//correct method to reverse using swap function

//Method 1: custom reversal using 2-pointer approach
void reverseArray(int arr[],int n)
{
    int l=0, h=n-1;
    // while(l<h)
    // {
    //     swap(arr[l],arr[h]);
    //     l++;
    //     h--;
    // }

    //pro ki tarah kese code karenge
    while(l<h)
       swap(arr[l++], arr[h--]);
}
int main()
{
    int arr[8]={10,20,30,40,50,60,70,80};
    int n= sizeof(arr)/sizeof(arr[0]);       //detemining size of array using the formula
    reverseArray(arr,n);

    //printing the reverse array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}