#include<iostream>
using namespace std;
// void extremePrint(int arr[],int n)
// {
//     int i=0;
//     int j=n-1;
//     while(i<=j)
//     {
//         if(i==j)
//         {
//             cout<<arr[i]<<" ";
//             break;
//         }
//         else
//         {
//             cout<<arr[i]<<" ";
//             i++;
//             cout<<arr[j]<<" ";
//             j--;
//         }
//     }
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
//     extremePrint(arr,size);
//     return 0;
// }


void extremePrint(int arr[], int size)
{
    int i=0;
    int j= size-1;
    while(i<=j)
    {
        if(i==j)   //ye waala logic odd number of elements jab user ne enter kiye hon tab kaam aaega
        {
            cout<<arr[i];
            break;
        }
        else
        {
            cout<<arr[i]<<endl;
            i++;
            cout<<arr[j]<<endl;
            j--;
        }
    }
    
}
int main()
{
    int arr[100];
    int size;
    cout<<"enter the number of elements you want to insert";
    cin>>size;

    for(int i=0;i<size;i++)
    {
        cout<<"enter the value for index:"<<i<<endl;
        cin>>arr[i];
    }

    extremePrint(arr,size);
    return 0;
}