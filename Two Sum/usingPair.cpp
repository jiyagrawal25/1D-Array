#include<iostream>
using namespace std;
pair<int,int> checkTwoSum(int arr[], int n, int target)   //ab jo function hai hamara vo bool ki jagah pair return karega
{

    //Assuming (-1,-1) as no answer found
    pair<int,int>ans = make_pair(-1,-1);        //ans ka pair create kar liya usey -1,-1 se initialize kara liya
    //check all pairs
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                ans.first=arr[i];
                ans.second=arr[j];
                return ans;
            }
        }
    }
    //agar yahaan tak pahuch gaye matlab koi bhi pair target ke equal nhi mila
    return ans;
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
    pair<int,int> ans = checkTwoSum(arr,size,target);
    if(ans.first ==-1 && ans.second==-1)
    {
        cout<<"pair not found";
    }
    else{
        cout<<"pairfound:"<<ans.first<<","<<ans.second<<endl;
    }
}