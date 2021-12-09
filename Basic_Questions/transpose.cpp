#include<iostream>
using namespace std;
class matrix{
      int mat[10][10];
      int r;
      int c;
      public:
      void read(){
          cout<<"enter the rows in the matrix"<<endl; 
          cin>>r;
          cout<<"enter the coloumns in the matrix"<<endl;
          cin>>c;
          cout<<"enter the elements of matrix"<<endl;
          for(int i=0;i<r;i++){
              for(int j=0;j<c;j++){
                  cin>>mat[i][j];
              }
          }
      }
      void display(){
          for(int i=0;i<r;i++){
              for(int j=0;j<c;j++){
                  cout<<mat[i][j]<<" ";
      }
      cout<<endl;

}
      }
    friend void transpose(matrix m1,matrix &m2);   
};
void transpose(matrix m1,matrix&m2){
    m2.r=m1.c;
    m2.c=m1.r;
    for(int i=0;i<m1.c;i++){
        for(int j=0;j<m1.r;j++){
            m2.mat[i][j]=m1.mat[j][i];
        }
    }
}

int main(){
        matrix m1;
        m1.read();
        matrix m2;
        transpose(m1,m2);
        cout<<"the transpose of matrix is :"<<endl;
        m2.display();
}
