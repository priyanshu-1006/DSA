#include <iostream>
using namespace std;
int main(){
    int arr[2][4];
    arr[0][0] = 61;
    arr[0][1] = 24;
    arr[0][2] = 35;
    arr[0][3] = 43;
    arr[1][0] = 80;
    arr[1][1] = 90;
    arr[1][2] = 95;
    arr[1][3] = 93;

    int brr[2][4];
    brr[0][0] = 15;
    brr[0][1] = 27;
    brr[0][2] = 38;
    brr[0][3] = 45;
    brr[1][0] = 80;
    brr[1][1] = 70;
    brr[1][2] = 67;
    brr[1][3] = 83;
    
    int crr[2][4];
    for(int i=0; i<2;i++){ // rows
        for(int j=0; j<4; j++){ //coloumns
          crr[i][j] = arr[i][j] + brr[i][j];  
        }
        cout<<endl;
    }
    for(int i=0; i<2;i++){ // rows
        for(int j=0; j<4; j++){ //coloumns
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"+"<<endl;

    for(int i=0; i<2;i++){ // rows
        for(int j=0; j<4; j++){ //coloumns
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"="<<endl;
    
    for(int i=0; i<2;i++){ // rows
        for(int j=0; j<4; j++){ //coloumns
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
}