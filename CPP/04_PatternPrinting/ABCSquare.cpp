#include<iostream>
using namespace std;
int main(){
    int m = 0 ;
    cout<<"Enter m : ";
    cin>>m;
    for(int i=1; i<=m; i++){
        for(int j=65; j<=m+65; j++){
            cout<<char(j);
        }
        cout<<endl;
    }
}