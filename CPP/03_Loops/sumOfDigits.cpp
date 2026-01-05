#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    int ld;
    int sum = 0;
    cin>>n;
    while(n!=0){
        int ld = n%10;
        n=n/10;
        sum = sum + ld;
    }
   
    cout<<sum;
}