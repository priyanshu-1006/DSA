#include <iostream>
using namespace std;
int main(){
    char arr[9] = {'p','r','i','y','a','n','s','h','u'};
    for(int i=0; i<=9; i++){
        cout<<arr[i];
    }
    cout<<endl;
    string x = "Priyanshu is Good Boy";
    cout<<x<<endl;
    string y;
    cout<<"Enter a String : ";
    // cin>>y;
    getline(cin,y);
    cout<<y;
}