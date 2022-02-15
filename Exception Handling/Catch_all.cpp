#include<iostream>
using namespace std;
void test(int i){
    try{
        if(i==1){
            throw (1);
        }
        if(i==0){
            throw ('x');
        }
        if(i==-1){
            throw (2.34);
        }
        else{
            cout<<"terminated\n";
        }
    }
    catch(...){
        cout<<"exception caught \n";
    }
     
}
int main(){
    test(1);
    test(0);
    test(-1);
    test(2);
     
}
