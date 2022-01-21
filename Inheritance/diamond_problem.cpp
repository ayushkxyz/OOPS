#include<iostream>
using namespace std;
class A{
   
   public:
   int x;
   void setX(){
     x=12;
   }
   void print(){
       cout<<x<<endl;
   }
};
class B:virtual public A{
    public:
    int y;
    void sety(){
        y=23;
    }
    
};
class C:virtual public A{
    public: 
    int c;
    void setc(){
        c=453;
    }
};
class D:public B,public C{
     
};
int main(){
    D D1;
   D1.print();
}
