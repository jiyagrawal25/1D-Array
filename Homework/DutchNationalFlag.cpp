#include<iostream>
#include<algorithm>
using namespace std;
void sortZeroOneTwo(int arr[], int size)
{
    int zerocount = 0;
    int onecount = 0;
    int twocount = 0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            zerocount++;
        }
        else if(arr[i]==1)
        {
            onecount++;
        }
        else
        {
            twocount++;
        }
    }
    // fill(arr, arr+zerocount, 0);
    // fill(arr+zerocount, arr+zerocount+onecount, 1);
    // fill(arr+zerocount+onecount, arr+size, 2);

    //insertion
    for(int i=0;i<zerocount;i++)
    {
        arr[i]=0;
    }
    for(int i=zerocount;i<zerocount+onecount;i++)
    {
        arr[i]=1;
    }
    for(int i=zerocount+onecount;i<size;i++)
    {
        arr[i]=2;
    }

}
int main()
{ 
    int arr[100];
    int size;
    cout<<"enter the size of the array";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    sortZeroOneTwo(arr, size);
    // sort(arr, arr+size);             //can also use sort function which will automatically arrange the elements of array in ascending order
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}