#include <iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5,6,7,9,87,75,3400,765,657,65,867};
    int n = sizeof(a)/4;
    // int b[n];
    // for(int i=0;i<n;i++){
    //     b[i] = a[n-1-i];
    // }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    // reverse
    int i = 0;
    int j = n-1;
    while(i,j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}