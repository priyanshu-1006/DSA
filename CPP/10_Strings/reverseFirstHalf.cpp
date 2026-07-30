#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Priyanshu";
    cout<<s<<endl;
    int n = s.length();
    int i = 0;
    int j = n/2 - 1;
    while(i<j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    cout<<s<<endl;
    
}