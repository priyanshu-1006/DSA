#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,9,87,75,3400,765,657,65,867};
    int n = sizeof(arr)/4;
    int mn = arr[0];
    for(int i=0; i<=n-1; i++){
        // if(arr[i]>mx) mx = arr[i];   
        mn = min(mn,arr[i]);
    }
    cout<<"Minimum : "<<mn;
}