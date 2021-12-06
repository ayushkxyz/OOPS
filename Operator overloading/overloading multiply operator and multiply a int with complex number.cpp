#include<iostream>
using namespace std;
class complex{
    int real;
    int imag;
    public:
    complex(){
        real=0;
        imag=0;
    }
    complex(int real,int imag){
        this->real=real;
        this->imag=imag;
    }
    void display(){
        cout<<real<<"+ (i)*"<<imag<<endl;
    }
    friend complex operator *(complex c1,int n);

};
complex operator *(complex c1,int n){
    complex c2;
    c2.real=c1.real*n;
    c2.imag=c1.imag;
    return c2;
}
int main(){
    complex c1;
    c1.display();
    complex c2(12,3);
    c2.display();
    complex c3=c2*5;
    c3.display();


}
