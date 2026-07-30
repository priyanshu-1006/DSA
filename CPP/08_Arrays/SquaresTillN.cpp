#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Give Number : ";
    cin>>n;
    int arr[n] ;
    int m = sizeof(arr)/4;
   
    for(int i=0; i<=m-1; i++){
        arr[i] = (i+1)*(i+1);
    }
    for(int i=0; i<=m-1;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}