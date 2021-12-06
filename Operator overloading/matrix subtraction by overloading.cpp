//overloading of subtrction operator 
#include<iostream>
using namespace std;
class matrix{
     int arr[5][4];
     public:
     matrix(){
         for(int i=0;i<5;i++){
             for(int j=0;j<4;j++){
                 arr[i][j]=0;
             }
         }
     }
     void read(){
cout<<"enter the elements of Matrix"<<endl;
         for(int i=0;i<5;i++){
             for(int j=0;j<4;j++){
                 cin>>arr[i][j];
             }
         }
     }
     void display(){
         for(int i=0;i<5;i++){
             for(int j=0;j<4;j++){
                 cout<<arr[i][j]<<" ";
             }
             cout<<endl;
         }
     }
     matrix operator -(matrix m2){
         matrix m3;
         for(int i=0;i<5;i++){
             for(int j=0;j<4;j++){
                m3.arr[i][j]=arr[i][j]-m2.arr[i][j];
             }
             
         }
         return m3;
     }

   

};
int main(){
    matrix m1,m2,m3;
    m1.read();
    m1.display();
    m2.read();
    m2.display();
    m3=m1-m2;
    m3.display();


    
    
}
