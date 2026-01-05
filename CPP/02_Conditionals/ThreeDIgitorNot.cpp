#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    if(x<1000 && x>99){
        cout<<"It is three digit number";
    } else cout<<"This is not three digit number";

}
