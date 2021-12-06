//overloading plus operator to add time
#include<iostream>
using namespace std;
class t{
    int hr;
    int min;
    int sec;
    public:
    t(){
        hr=0;
        min=0;
        sec=0;
        }
    t(int hr,int min,int sec){
        this->hr=hr;
        this->min=min;
        this->sec=sec;
    }    
    void display(){
        cout<<hr<<":"<<min<<":"<<sec<< endl;
    }
    friend t operator+(t t2,t t3);
};

 t operator +(t t2,t t3){
         t t4;
        t4.sec=t2.sec+t3.sec;
        int second=t3.sec/60;
        t4.sec=t4.sec%60;
        t4.min=t2.min+t3.min+second;
        int minute=t4.min/60;
        t4.min=t4.min%60;
        t4.hr=t2.hr+t3.hr+minute;
        return t4;
    }
    int main(){
        t t1;
        t t2(4,56,34);
        t t3(2,23,59);
        t t4=t2+t3;
        t4.display();


    }
