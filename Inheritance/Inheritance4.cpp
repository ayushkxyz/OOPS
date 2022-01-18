#include<iostream>
using namespace std;
class vehicle{
    
      int max_speed;
      protected:
      int num_tyres;
      public:
      string color;
      vehicle(){
        cout<<"vehicles default constructor\n";
    }
    vehicle(int x){
        cout<<"vehicles parameterised constructor\n";
    }
    ~vehicle(){
        cout<<"vehicles destructor\n";
    }
};
class car:public vehicle{
    public:
    int num_gears;
    void print(){
        cout<<"color"<<color<<endl;
        cout<<"num_tyres"<<num_tyres<<endl;
        cout<<"num_gears"<<num_gears<<endl;

    }
    car():vehicle(){
        cout<<"car's default constructor\n";

    }
    car(int x,int y):vehicle(y){
        cout<<"car's parameterised constructor\n";
        num_gears=x;
    }
    ~car(){
        cout<<"car's default destructor\n";
    }
};
class honda_city:public car{
    public:
     honda_city():car(){
         cout<<"honda city default's constructor\n";
     }
    honda_city(int x,int y):car(x,y){
        cout<<"honda city parameterised constructor\n";
    }
    ~honda_city(){
        cout<<"honda city destructor\n";
    }
};
int main(){
    honda_city h1;
    cout<<endl<<endl;
    honda_city h2(3,5);
}
