#include<iostream>
#include<algorithm>
using namespace std;

//Normal Flip Method

// void Flip(int arr[], int size)
// {
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]==0)
//         {
//             arr[i]=1;
//         }
//         else
//         {
//             arr[i]=0;
//         }
//     }
    
// }
// int main()
// { 
//     int arr[100];
//     int size;
//     cout<<"enter the size of the array";
//     cin>>size;
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
//     Flip(arr, size);
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }




//1's Complement Method
#include <iostream>
using namespace std;

void onesComplement(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] = 1 - arr[i];  
        // Flip 0 to 1 and 1 to 0
        //iss se kya hoga ki agar 1-0 karenge to 1 aa jaega 
        //and similarly jab 1-1 karenge toh vo 0 aa ajega
    }
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 0, 1, 1, 0, 0, 1};  // Original array
    int size = 7;

    cout << "Original Array: ";
    printArray(arr, size);

    onesComplement(arr, size);

    cout << "1's Complement:  ";
    printArray(arr, size);

    return 0;
}
