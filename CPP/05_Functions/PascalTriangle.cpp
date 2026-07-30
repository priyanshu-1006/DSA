#include<iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i=1; i<=x; i++){
        f *= i;
    }
    return f;
}
int ncr(int n, int r){
    int a = fact(n);
    int b = fact(r);
    int c = fact(n-r);
    return a/(b*c);
}
int main(){
    int m  ;
    cout<<"Enter m : ";
    cin>>m;
    for(int i=0; i<=m; i++){
        
        for(int j=0; j<=i; j++){
            cout<<ncr(i,j)<<" ";
           
        }
        cout<<endl;
    }

}