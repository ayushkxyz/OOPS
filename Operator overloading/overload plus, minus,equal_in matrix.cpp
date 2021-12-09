#include<iostream>
using namespace std;
class matrix{
    int arr[10][10];
    int r;
    int c;
    public:
    matrix(){
        r=0;
        c=0;
    }
    matrix(int r,int c){
        this->r=r;
        this->c=c;
    }
    void read(){
        cout<<"enter the elements of matrix"<<endl;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
          cin>>arr[i][j];
            }
        }
    }
    void display(){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
          cout<<arr[i][j]<<" ";
            }cout<<endl;
        }
    }
    bool operator==(matrix c1){
        return (r==c1.r&&c==c1.c);
    }

    friend matrix operator+(matrix m1,matrix m2);
    friend matrix operator-(matrix m1,matrix m2);
};
matrix operator+(matrix m1,matrix m2){
    if(m1==m2){
        cout<<"the matrices are compatible"<<endl;
        matrix m3(m1.r,m1.c);
        for(int i=0;i<m1.r;i++){
            for(int j=0;j<m1.c;j++){
                m3.arr[i][j]=m1.arr[i][j]+m2.arr[i][j];
            }
        }
        return m3;
    }
    
     
}
matrix operator-(matrix m1,matrix m2){
     if(m1==m2){
        cout<<"the matrices are compatible"<<endl;
        matrix m3(m1.r,m1.c);
        for(int i=0;i<m1.r;i++){
            for(int j=0;j<m1.c;j++){
                m3.arr[i][j]=m1.arr[i][j]-m2.arr[i][j];
            }
        }
        return m3;
    
    }
}
int main(){
    matrix m1(2,2);
    matrix m2(2,3);
    if(m1==m2){
        cout<<"the matrices are compatible"<<endl;
    }
    else{
        cout<<"the matrices are not compatible"<<endl;
    }
    matrix m3(2,3);
    m2.read();
    m3.read();
    matrix m4=m2+m3;
    matrix m5=m2-m3;
m4.display();
cout<<endl;
m5.display();
}

