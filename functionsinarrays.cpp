#include<iostream>
using namespace std;
void solve(int arr[],int size)
{
    arr[1]=50;
}
int main()
{
    int arr[]={10,20,30};
    int size=3;
    solve(arr,size);
    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
}



// void print(int arr[], int size)
// {
//   for(int i=0;i<size;i++)
//   {
//       cout<<arr[i]<<" ";
//   }
// }

// int main()
// {
//     int arr[5]={10,20,30,40,50};
//     int size = 5;
//     print(arr,size);
// }