#include<iostream>
using namespace std;
// Pass by reference
void swap(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int x=2;
    int y=5;
    cout<<x<<" "<<y<<endl;
    // Method 1
    // int temp ;
    // temp = x;
    // x = y;
    // y = temp;

    // Method 2
    x = x + y;
    y = x - y;
    x = x - y;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}