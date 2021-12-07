#include<iostream>
using namespace std;
class dis{
  int feet;
  int inches;
  public:
  dis(){
      feet=0;
      inches=0;
  }
  friend void operator >>(istream &input,dis &d1);
  friend void operator <<(ostream &output,dis &d1);

};
void operator >>(istream &input,dis&d1){
    input>>d1.feet>>d1.inches;
}
void operator <<(ostream &output,dis &d1){
    output<<d1.feet<<" "<<d1.inches<<endl;
}
int main(){
    dis d1;
    cin>>d1;
    cout<<d1;
}
