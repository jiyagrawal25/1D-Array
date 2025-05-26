//count the number of 0's and 1's stored in an array
#include<iostream>
using namespace std;
int printNumberof0and1(int arr[], int size)
{
    int zerocount=0;
    int onecount=0;
    for(int i=0;i<size;i++)
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
    cout<<"zerocount is:"<<zerocount<<endl;
    cout<<"onecount is:"<<onecount<<endl;
}
int main()
{
    int arr[100];
    int size;
    cout<<"enter the number of elements you want";
    cin>>size;

    for(int i=0;i<size;i++)
    {
        cout<<"enter the value for index: " <<i<<endl;
        cin>>arr[i];
    }
    printNumberof0and1(arr,size);
    return 0;
}