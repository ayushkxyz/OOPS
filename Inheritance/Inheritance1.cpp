#include<iostream>
using namespace std;
class vehicle{
     int max_speed;
    protected:
    int num_tyres;
     public:
    string color;
    vehicle(){
        cout<<"vehicles Default constructor\n";
    }
    ~vehicle(){
        cout<<"vehicle's Destructor\n";
    }
};
class car :public vehicle{
    public:
    car() :vehicle(){
        cout<<"car's default constructor\n";
    }
    ~car(){
        cout<<"car's destructor\n";
    }
    int num_gears;

    void print(){
        cout<<"color "<<color<<endl;
        cout<<"num_tyres"<<num_tyres<<endl;
        cout<<"num_gears"<<num_gears<<endl;
       // cout<<"max speed"<<max_speed<<endl;
    }
};
int main(){
   vehicle v;
   car c;       
 
}
