#include<iostream>
using namespace std;
class complex{
    int r;
    int i;
    public:
    void read(){
     cin>>r;
     cin>>i;
    }
    void display(){
        cout<<r<<"+ i"<<i<<endl;
    }
    complex add(int a,complex c1){
        complex c2;
        c2.r=a+c1.r;
        c2.i=c1.i;
      return c2;
    }
    complex add(complex c1,complex c2){
          complex c3;
          c3.r=c1.r+c2.r;
          c3.i=c1.i+c2.i;
          return c3;
    } 
};
int main(){
    complex c1;
    c1.read();
    complex c3;
    c3.read();
    complex c2=c3.add(5,c1);
    complex c4=c3.add(c2,c3);
    c2.display();
    c3.display();
    c4.display();

}
