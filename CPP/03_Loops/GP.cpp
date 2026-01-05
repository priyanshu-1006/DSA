#include<iostream>
using namespace std;
int main(){
    int x = 1;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<x<<endl;
        x = x*2;
    }
}