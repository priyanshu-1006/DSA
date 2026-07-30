#include <iostream>
using namespace std;
int power(int a, int b){
    if(b==1) return a;
    return a * (power(a,b-1));
}
int main(){
    int a;
    int b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<power(a,b);

}