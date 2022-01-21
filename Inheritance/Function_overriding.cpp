#include<iostream>
using namespace std;
class A{
    public:
    void print(){
        cout<<"In base"<<endl;
    }
};
class B:public A{
    public:
    void print(){
        cout<<"In Derived class\n";
    }
    
};
int main(){
     A obj;
     B obj1;
     obj.print();
     obj1.print();
     obj1.A::print();

}
