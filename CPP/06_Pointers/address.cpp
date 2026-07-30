#include <iostream>
using namespace std;
// Pass by reference
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x = 3;
    int* p = &x;
    //0x61ff0c
    int y = 28;
    cout<<&y<<endl;

    cout<<x<<endl; // hexa decimal address
    cout<<*p<<endl;
    *p = 23;
    cout<<x<<endl;
    cout<<x<<" "<<y<<endl;
    swap(&x, &y);
    cout<<x<<" "<<y<<endl;

}