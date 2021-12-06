#include<iostream>
using namespace std;
class complex{
    int x;
    int y;
    public:
    complex(){
        x=0;y=0;
}
    complex(int x,int y){
        this->x=x;
        this->y=y;
    }
    void display(){
        cout<<x<<"+ ("<<y<<"*i)"<<endl;
    }
    friend complex operator +(complex c1,complex c2);
};
complex operator +(complex c1,complex c2){
    complex c3;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;
    return c3;
}
int main(){
    complex c1;
    c1.display();
    complex c2(1,2);
    c2.display();
    complex c3(12,-3);
    c3.display();
    complex c4=c2+c3;
    c4.display();
}
