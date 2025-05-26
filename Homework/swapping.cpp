#include<iostream>
using namespace std;
int main()
{
    //different methods to swap two numbers

    //1. swap inbuilt function (best method)
    // int a=5; 
    // int b=6;
    // swap(a,b);
    // cout<<"a:"<<a<<" "<<"b:"<<b<<endl;


    //2. using temp variable
    // int a=5; 
    // int b=6;
    // int temp=a;
    // a=b;
    // b=temp;
    // cout<<"a:"<<a<<" "<<"b:"<<b<<endl;


    //3. Arithmetic Method    (!!!!!!interview question!!!!!!!!)
    //  int a=5; 
    //  int b=6;
    //  a=a+b;
    //  b=a-b;
    //  a=a-b;
    //  cout<<"a:"<<a<<" "<<"b:"<<b<<endl;


    //4. xor bitwise method    (!!!!!!interview question!!!!!!!!)
    int a=5; 
    int b=6;
    a= a^b;
    b=b^a;
    a=a^b;
    cout<<"a:"<<a<<" "<<"b:"<<b<<endl;




    return 0;
}