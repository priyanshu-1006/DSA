#include<iostream>
using namespace std;
int main(){
    int m = 0 ;
    cout<<"Enter m : ";
    cin>>m;
    for(int i=1; i<=m; i++){
        
        for(int j=1; j<=i; j++){
            cout<<"*";
           
        }
        cout<<endl;
    }
}