#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    if(x%5==0 || x%3==0){
        cout<<"It is divisible by 3 or 5";
    } else cout<<"It is not divisible by 3 or 5";

}
