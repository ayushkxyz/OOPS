#include<iostream>
using namespace std;
class dis{
    int x;
    public:
    dis(){
        x=0;
    }
    dis(int x){
        this->x=x;
    }
    void display(){
        cout<<x<<" ";
    }
    bool operator ==(dis d2){
        if(x==d2.x){
            return true;
        }
        else return false;
    }
    
};
int main(){
    dis d1(12);
dis d2(13);
    if(d1==d2){
       cout<<"d1 and d2 are equal"<<endl;
    }
    else{
        cout<<"d1 and d2 are not equal"<<endl;
    }
    return 0;
}
