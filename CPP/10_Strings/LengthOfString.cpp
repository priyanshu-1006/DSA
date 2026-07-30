 #include <iostream>
using namespace std;
int main(){
    string x = "Priyanshu is Good Boy";
    cout<<x<<endl;
    cout<<x.length()<<endl;
    int n = x.length();
    for(int i=0;i<n;i++){
        cout<<x[i];
    }
}