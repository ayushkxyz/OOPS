#include<iostream>
using namespace std;
class vehicle{
    int reg_number;
    static int count;
    public:
    vehicle(){
       count++;
    }
    ~vehicle(){
        cout<<"number of vehicles remaining :"<<count-1<<endl;
        count--;
    }
    void setregno(int num){
        reg_number=num;
    }
    int getregno(){
        return reg_number;
    }
    static int getVehiclecount(){
        return count;
    }

};
int vehicle ::count=0; 
int main(){
    vehicle v1;
    v1.setregno(2143);
    vehicle v2;
    v2.setregno(4321);
    cout<<v1.getregno()<<endl;
    cout<<v2.getregno()<<endl;
    vehicle v3;
    cout<<"the number of vehicles present are :"<<  vehicle ::getVehiclecount();
  cout<<endl;
}
