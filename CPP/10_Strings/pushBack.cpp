#include <iostream>
using namespace std;
int main(){
    string s = "Priyansh";
    cout<<s<<endl;
    s.push_back('u');
    cout<<s<<endl;
    s.push_back('l');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    s.append(" Chaurasia");
    cout<<s<<endl;
    cout<<s<<" "<<s.length()<<endl;
    s.clear();
    cout<<s<<" "<<s.length()<<endl;

    // + Operator
    s = s + "Priyanshu";
    cout<<s<<endl;
    s = s + " Chaurasia";
    cout<<s<<endl;

}