#include<iostream>
using namespace std;
int main()
{
    //creation of an array


    //array declaration
    int arr[10];

    // int brr[];   
    //will give error as size is not defined

    //array initialization
    int crr[]={1,2,3,4,90};

    
    int drr[4]={0};
    //iss se drr waale array mein oth index pe 0 aa jaega kyuki humne 0 se initialize kara hai aur baaki indexes par automatically 0 ho jaega kyuki unke liye humne kuch bhi iniatialize nhi kiya hai

    cout<<drr[8]<<endl;           //index se bahr jaane pe koi garbage value print ho jaegi ya fir koi compiler ho sakta hai error throw kar de like index se bahr jaana allowed nhi hai      
    // most probably segmentation fault aana chahiye
    cout<<crr[3]<<endl;
    return 0;
}