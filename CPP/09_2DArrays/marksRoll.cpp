#include <iostream>
using namespace std;
int main(){
    int arr[2][4];
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[0][3] = 4;
    arr[1][0] = 80;
    arr[1][1] = 90;
    arr[1][2] = 97;
    arr[1][3] = 93;
    for(int j=0; j<4;j++){ // rows
        for(int i=0; i<2; i++){ //coloumns
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}