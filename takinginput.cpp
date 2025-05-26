//taking input for array
#include<iostream>
using namespace std;
// int main()
// {
//     int arr[10];
//     for(int index=0;index<10;index++)   //for taking input
//     {
//         cout<<"enter the value for box index:"<<index<<endl;
//         cin>>arr[index];
//     }
//     for(int index=0;index<10;index++)    //to print
//     {
//         cout<<index[arr]<<" ";        //arr[i] aur i[arr] dono chalte hain
//     }
//     return 0;
// }


int main()
{
    int arr[10];

    //to take input from user
    for(int i=0;i<10;i++)
    { 
        cout<<"enter value for index "<<i<<endl;
        cin>>arr[i];
    }

    //to print the values of an array
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    // arr[i] aur i[arr] dono chalte hain
    //for(int i=0;i<10;i++)
    //{
    //   cout<<i[arr]<<" ";
    //}
}