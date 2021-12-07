#include<iostream>
using namespace std;
class complex{
    int x;
    int y;
    public:
    complex(){
        x=0;
        y=0;
    }
    
    friend void operator>>(istream&input,complex&c2);
    friend void operator<<(ostream&output,const complex&c2);
};
void operator>>(istream&input,complex&c2){
         input>>c2.x>>c2.y;

}
void operator<<(ostream&output,const complex&c2){
     output<<c2.x<<" "<<c2.y;
}
int main(){
    complex c1;
    complex c2;
    cin>>c1;
    cout<<c1;
}
