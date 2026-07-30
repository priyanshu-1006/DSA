#include <iostream>
using namespace std;
class student{  // class
    public: 
    string name;
    int rno;
    float gpa;
};
class car{
    public: 
    string name; 
    int price;
    int seats;
    string type;


};
void print(student s){
    cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
}
int main(){
    student s1; // object (s1, s2)
    s1.name = "Priyanshu Chaurasia";
    s1.rno = 86;
    s1.gpa = 7.8;
    
    student s2;
    s2.name = "Priyanjali Chaurasia";
    s2.rno = 66;
    s2.gpa = 8.8;

    // cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<endl;
    // cout<<endl;
    // cout<<s2.name<<" "<<s2.gpa<<" "<<s2.rno<<endl;

    print(s1);
    print(s2);
    
    car c1;
    c1.name = "Honda Amaze";
    c1.price = 1000000;
    c1.seats = 5;
    c1.type = "Sedan";
    car c2;
    c2.name = "Honda City";
    c2.price = 1500000;
    c2.seats = 5;
    c2.type = "Sedan";

    cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<endl;
    cout<<endl;
    cout<<c2.name<<" "<<c2.price<<" "<<c2.type<<endl;
};