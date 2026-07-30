#include <iostream>
using namespace std;
int main(){
    int arr[2][3];
    arr[0][0] = 22;
    arr[0][1] = 34;
    arr[0][2] = 56;
    arr[1][0] = 63;
    arr[1][1] = 13;
    arr[1][2] = 45;
    for(int j=0; j<3;j++){ // rows
        for(int i=0; i<2; i++){ //coloumns
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}