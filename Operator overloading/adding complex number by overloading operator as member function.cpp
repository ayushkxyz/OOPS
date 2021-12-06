//add two complex number using memeber function as overloading
#include<iostream>
using namespace std;
class Complex{
    int x;
    int y;
    public:
    
    Complex(){
        x=0;y=0;
    }
    Complex(int x,int y){
        this->x=x;
        this->y=y;
    }
    void display(){
        cout<<x<<"+"<<"i"<<" "<<y<<endl;
    }
    Complex operator +(Complex num1){
         Complex n2;
         n2.x=x+num1.x;
         n2.y=y+num1.y;
         return n2;
    }


};
int main(){
    Complex c1;
    Complex c2(12,3);
    c1.display();
    c2.display();
    
    Complex c3(2,4);
    c3.display();
    Complex c4=c2+c3;
    c4.display();

}
