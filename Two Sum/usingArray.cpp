#include<iostream>
#include<limits.h>
using namespace std;
void checkTwoSum(int arr[], int n, int target, int ans[])   
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                ans[0]=arr[i];
                ans[1]=arr[j];
                return;
            }
        }
    }
    //agar yahaan tak pahuch gaye matlab koi bhi pair target ke equal nhi mila
    return;
} 

int main()
{
    int target;
    int ans[2]={INT_MIN , INT_MIN};
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
    checkTwoSum(arr,size,target,ans);
    cout<<ans[0]<<" "<<ans[1]<<endl;
}