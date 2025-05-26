#include<iostream>
#include<limits.h>
using namespace std;
// int findMax(int arr[],int size)
// {
//     int maxAns = INT_MIN;
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]>maxAns)          //if ki jagah in built max function bhi use kar sakte hain
//         {                          //maxAns=max(maxAns,arr[i]);
//             maxAns=arr[i];         
//         }
//     }
//     return maxAns;
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

//     cout<<"Max number is:"<<findMax(arr,size)<<endl;
//     return 0;
// }

int findMax(int arr[], int size)
{
    int ans=INT_MIN;  //to use INT_MIN we have to add #include<limits.h> header file
    for(int i=0;i<size;i++)
    {
        if(arr[i]>ans)
        {
            ans = arr[i];
            //can also use in built max function 
            //ans = max(ans, arr[i]);
            //toh jo bhi ans aur arr[i] mein se bada hoga vo ans mein store ho jaega
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