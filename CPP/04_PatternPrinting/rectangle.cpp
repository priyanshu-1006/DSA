#include<iostream>
using namespace std;
int main(){
    int m = 0 ;
    int n = 0;
    cout<<"Enter m : ";
    cin>>m;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=0; i<=m; i++){
        for(int j=0; j<=n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}