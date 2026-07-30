#include <iostream>
using namespace std;
int main(){
    int arr[] = {10,1,4,6,9,8,5,3};
    int n = sizeof(arr)/4;
    int mx = 0;
    for(int i=0; i<n;i++){
        mx = max(mx,arr[i]);
    }

    int smx = 0;
    for(int i=0; i<n;i++){
        if(arr[i]!=mx){
            smx = max(smx,arr[i]);
        };
    }
    cout<<smx;
}