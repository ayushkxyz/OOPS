#include<iostream>
using namespace std;
class student{
    char usn[15];
    int arr[6][4];
    public:
   void read(int i){
       cout<<"enter USN:"<<endl;
       cin>>usn;
       cout<<"Marks of sub1 ,sub2 ,sub 3:"<<endl;
       cin>>arr[i][0];
       cin>>arr[i][1];
       cin>>arr[i][2];
   }
   void calculate(){
       
        for(int i=0;i<6;i++){
               int b1=0,b2=0;
            for(int j=0;j<3;j++){
                 if(b1<arr[i][j]){
                     b2=b1;
                     b1=arr[i][j];
                 }
                 if(b2<arr[i][j]&&b1!=arr[i][j]){
                     b2=arr[i][j];
                 }
            }
            arr[i][3]=(b1+b2)/2;

        }
   }
   void display(int i){
cout<<"USN :"<<usn<<endl;
cout<<"Average Marks :"<<arr[i][3]<<endl;

   }
 
};
int main(){
    student s1[6];
    for(int i=0;i<6;i++){
        cout<<"enter the details of student "<<i+1<<endl;
         s1[i].read(i);
         s1[i].calculate();
    }
    cout<<"The average marks are as follows:"<<endl;
    for(int i=0;i<6;i++){
        s1[i].display(i);
    }
    
}
