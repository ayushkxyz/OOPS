#include<iostream>
using namespace std;
void divide(int a,int b,int c){
    int dif=a-b;
    if(dif!=0){
        cout<<"the result is :"<<c/dif<<endl;
    }
    else{
        throw(dif);
    }
}
int main(){
    try{
        divide(10,20,30);
        cout<<endl;
        divide(10,10,30);
    }
    catch(int x){
        cout<<"exception caught\n";
    }
    return 0;
}
