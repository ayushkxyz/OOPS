//overload +,*,== operator for a fraction class
#include<iostream>
using namespace std;
class fraction{
    int num;
    int den;
    public:
    fraction(int n,int d){
        num=n;
        den=d;
    }
    void simplify(){
        int i=1;
        int gcd=1;
        int t=min(num,den);
        while(i<=t){
            if(num%i==0&&den%i==0){
                gcd=i;
            }
            i++;
        }
        num=num/gcd;
        den=den/gcd;
    }
    void operator+(fraction const &f2){
           int lcm=den*f2.den;
           int n=(num*f2.den)+(den*f2.num);
           num=n;
           den=lcm;
           simplify();
    }
    void operator*(fraction const &f2){
        num=num*f2.num;
        den=den*f2.den;
        simplify();

    }
    bool operator ==(fraction const &f3){
        if(num==f3.num&&den==f3.den){
            return true;
        }
        else return false;
    }
    void display(){
        cout<<num<<"/"<<den<<endl;
    }

};
int main(){
    fraction f1(12,3);
    f1.display();
    fraction f2(13,5);
    f2.display();
    if(f1==f2){
        cout<<"they are equal"<<cout<<endl;
    }
    else{
        cout<<"they are not equal"<<endl;
    }
    
    f1+f2;
    f1.display();
    f1*f2;
    f1.display();


}

