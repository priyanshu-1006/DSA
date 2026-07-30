#include <iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i=1; i<=x; i++){
        f = f*i;
    }
    return f;
}
int main(){
    int n;
    int r;
    cout<<"Enter n : "<<endl;
    cin>>n;
    cout<<"Enter r : "<<endl;
    cin>>r;
    int a = fact(n);
    int b = fact(n-r);
    cout<<"Permutation = "<<a/b<<endl;
}