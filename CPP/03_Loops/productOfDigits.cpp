#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    int ld;
    int product = 1;
    cin>>n;
    while(n!=0){
        int ld = n%10;
        n=n/10;
        product = product * ld;
    }
    cout<<"Product of Digits is : ";
    cout<<product;
}