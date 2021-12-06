#include<iostream>
using namespace std;
class dist{
    int feet;
    int inches;
    public:
    dist(){
        feet=0;
        inches=0;
    }
    dist(int inches,int feet){
        this->inches=inches;
        this->feet=feet;
    }
    void display(){
        cout<<feet<<" "<<inches<<endl;
    }
    dist operator +(dist op){
        dist t;
        t.inches=inches+op.inches;
        int ex=t.inches/12;
        t.inches=t.inches%12;
        t.feet=feet+op.feet+ex;
        return t;
    }
};
int main(){
     dist d1;
     dist d2(12,23);
     d2.display();
     dist d3(13,34);
     d3.display();
     d1=d2+d3;
     d1.display();

}

