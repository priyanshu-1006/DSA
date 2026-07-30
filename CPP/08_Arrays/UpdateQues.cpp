#include <iostream>
using namespace std;
int main(){
    int arr[7] = {4,1,3,7,3,64,24};
    int m = sizeof(arr)/4;
    
    for(int i=0; i<=m-1;i++){
        if(i%2==0){
            arr[i] = arr[i] + 10;
        } else {
            arr[i] = 2*arr[i];
        }
    }
    for(int i=0; i<=m-1;i++){
        cout<<arr[i]<<" ";
    }
}