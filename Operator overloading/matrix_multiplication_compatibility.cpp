#include<iostream>
using namespace std;
class matrix{
    int rows;
    int cols;
    int a[10][10];
    public:
    matrix(){
        rows=2;
        cols=2;
    }
    matrix(int rows,int cols){
         this->rows=rows;
         this->cols=cols;
    }
    void read();
    void display();
    bool operator ==(matrix m2){
        if(cols==m2.rows){
            return true;
        }
        return false;
    }

};
void matrix::read(){
    cout<<"enter the elements:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
              cin>>a[i][j];
        }
    }
}
 void matrix::display(){
     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
              cout<<a[i][j]<<" ";
        }
        cout<<endl;
 }
    
}
int main(){
    int r,c;
    cin>>r>>c;
    matrix m1(r,c);
    cin>>r>>c;
    matrix m2(r,c);
    m1.read();
    m2.read();
    m1.display();
    if(m1==m2){
        cout<<"multiplication possible"<<endl;
    }
    else{
        cout<<"multiplication not possible"<<endl;
    }
}
