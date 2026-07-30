#include <iostream>
#include <string>
using namespace std;
int main(){
    int x;
    cout<<"Enter any number : ";
    cin>>x;
    string s = to_string(x);
    int digits = s.length();
    cout<<"Number Of Digits : "<<digits<<endl;
    cout<<s<<endl;

}