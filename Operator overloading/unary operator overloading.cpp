#include<iostream>
using namespace std;

class space{
    int x;
    int y;
    int z;
    public:
    space(){
        x=0;
        y=0;
        z=0;
    }
    space(int x,int y,int z){
       this->x=x;
       this->y=y;
       this->z=z;
    }
    void read(){
        cin>>x;
        cin>>y;
        cin>>z;
    }
    void display(){
        cout<<x<<" "<<y<<" "<<z<<" "<<endl;
    }
    friend space operator -(space s1);

};
space operator -(space s1){
    space s2;
    s2.x=-s1.x;
    s2.y=-s1.y;
    s2.z=-s1.z;
    return s2;
}
int main(){
    space s1;
    space s2(1,2,3);
    s1.read();
    s1.display();
    s2.display();
    space s3=-s2;
    s3.display();
}
