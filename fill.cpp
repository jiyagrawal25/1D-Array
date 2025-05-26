//fill
#include<iostream>
using namespace std;
int main()
{
    //fill se hum purey array ko ek single value se initialize kara sakte hain
    int arr[4];
    fill(arr,arr+4,100);
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<endl;
    return 0;
}