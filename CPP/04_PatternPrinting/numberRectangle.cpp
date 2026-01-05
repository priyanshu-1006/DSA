#include<iostream>
using namespace std;
int main(){
    int m = 0 ;
    int n = 0;
    cout<<"Enter m : ";
    cin>>m;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cout<<j;
        }
        cout<<endl;
    }
}