#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,9,87,75,34,765,657,65,867};
    int n = sizeof(arr)/4;
    int sum = 0;
    for(int i=0; i<=n-1; i++){
        sum = sum + arr[i];
    }
    cout<<"Sum : "<<sum;
}