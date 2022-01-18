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
    vehicle(int x){
        cout<<"vehicles parameterised constructor\n";
    }
    ~vehicle(){
        cout<<"vehicle's Destructor\n";
    }
};
class car :public vehicle{
    public:
    car(int x) :vehicle(x){
        cout<<"car's parameterised constructor\n";
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
  // vehicle v;
  int x;
  cin>>x;
   car c(x);       
 
}
