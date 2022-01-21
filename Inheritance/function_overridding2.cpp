#include<iostream>
using namespace std;
class A{
    public:
    void display(){
        cout<<"In base class A\n";
    }
};
class B:public A{
    public:
    void display(){
        cout<<"In derived class B\n";
    }
};
class C:public B{
    public:
    void display(){
        cout<<"in derived class C\n";
    }
};
int main(){
    A obj1;
    obj1.display();
    B obj2;
    obj2.display();
    C obj3;
    obj3.display();
    obj1=obj2;
    obj1.display();
    A Bobj=obj3;
    Bobj.display();
    
}
