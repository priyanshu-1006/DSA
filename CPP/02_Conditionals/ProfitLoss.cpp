#include<iostream>
using namespace std;
int main(){
    int CP;   // Cost Price
    int SP;   // Selling Price
    cout<<"Enter Cost Price: ";
    cin>>CP;
    cout<<"Enter Selling Price: ";
    cin>>SP;
    if(CP>SP){
        cout<<"Loss of : ";
        cout<<CP-SP;
    }
    if(SP>CP){
        cout<<"Profit of : ";
        cout<<SP-CP;
    }
    if(SP==CP){
        cout<<"No Profit No Loss";
    }
}