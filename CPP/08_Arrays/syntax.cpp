#include <iostream>
using namespace std;
int main(){
    // 5 integers -> 6,2,8,5,0
    int arr[5];  // declaration
    cout<<"Enter Array Elements : ";
    for(int i=0; i<=4; i++){
        cin>>arr[i];
    }
    // arr[0] = 6;
    // arr[1] = 2;
    // arr[2] = 8;
    // arr[3] = 5;
    // arr[4] = 0;
    for(int i=0; i<=4;i++){
        cout<<arr[i]<<" ";
    }
    // cout<<arr[0]<<" ";
    // cout<<arr[1]<<" ";
    // cout<<arr[2]<<" ";
    // cout<<arr[3]<<" ";
    // cout<<arr[4]<<" ";


}