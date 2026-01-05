#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter a number : ";
    cin>>n;
    int count = 0;
    int sum = 0;
    int ld=0;
    while(n!=0){
        ld = n%10;
        sum = 10*sum+ld;
        n = n/10;
        count++;
    }
    cout<<sum<<endl;
}