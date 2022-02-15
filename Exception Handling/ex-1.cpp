
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int res=a-b;
    try{
        if(a-b!=0){
            cout<<"The result is :"<<res/a;
        }
        else{
            throw res;
        }
    }
    catch(int r){
       cout<<"Exception Caught\n";
       
    }
    return 0;
}
