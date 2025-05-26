#include<iostream>
using namespace std;
bool checkTwoSum(int arr[], int n, int target)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                return true;
            }
        }
    }
    //agar yahaan tak pahuch gaye matlab koi bhi pair target ke equal nhi mila
    return false;
} 

int main()
{
    int target;
    int arr[100];
    int size;
    cout<<"enter the size of the array";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"enter the value for index:"<<i<<endl;
        cin>>arr[i];
    }
    cout<<"enter the value of target";
    cin>>target;
    bool ans = checkTwoSum(arr,size,target);
    if(ans==true)
    {
        cout<<"pair found";
    }
    else{
        cout<<"not found";
    }
}