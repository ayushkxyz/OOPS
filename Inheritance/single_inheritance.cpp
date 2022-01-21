#include<iostream>
using namespace std;
class base{
    int x;
    public:
    void read(){
        cout<<"enter the value of x"<<endl;
        cin>>x;
    }
    void dispaly(){
        cout<<"in base class\n";
        cout<<x<<endl;
    }
};
class subclass :public base{
    int y;
    public:
    void input(){
        cout<<"enter the value of y\n";
        cin>>y;
     
    }
     
    void output(){
        cout<<"in subclass\n";
        cout<<y<<endl;
    }
    
};
int main(){
     base obj1;
        obj1.read();
        obj1.dispaly();
    subclass ob;

        ob.read();
        ob.dispaly();
        ob.input();
        ob.output();

}
