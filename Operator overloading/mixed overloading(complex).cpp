#include<iostream>
using namespace std;
class complex{
    int r;
    int i;
   public:
   complex(){
       r=0;
       i=0;
   }
   complex operator +(complex c2){
       complex c3;
       c3.r=c2.r+r;
       c3.i=c2.i+i;
       return c3;
   }
   friend void operator <<(ostream &output,const complex &c2);
   friend void operator >>(istream &input,complex &c2);
   
    
};
void operator >>(istream &input,complex &c2){
    input>>c2.r>>c2.i;
}
void operator <<(ostream &output,const complex &c2){
    output<<c2.r<<" "<<c2.i<<endl;
}
int main(){
    complex c1,c2;
    cout<<"enter the complex number"<<endl;
    cin>>c1;
    cout<<c1;
    cout<<"enter the complex number"<<endl;
    cin>>c2;
    complex c3=c1+c2;
    cout<<c3;

}
