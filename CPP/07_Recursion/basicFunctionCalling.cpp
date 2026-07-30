#include <iostream>
using namespace std;
void greet(){
    cout<<"hey"<<endl;
    greet();  //Recursion
}
int main(){
    greet();
}