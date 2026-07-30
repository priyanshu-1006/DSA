#include <iostream>
using namespace std;
int main(){
    string s = "Cow is a animal with four legs";
    int count = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' ||  s[i]=='e'|| s[i]=='i' || s[i]=='o'|| s[i]== 'u'){
            count = count + 1;
        }
    }
    cout<<count;
}