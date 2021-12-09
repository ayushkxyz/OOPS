#include<iostream>
using namespace std;
class employee{
    int emp_number;
    char name[10];
    float basic;
    float da;
    float it;
    float net_salary;
    public:
    void read(){
        
        
        cout<<"enter the employee number :"<<endl;
        cin>>emp_number;
        cout<<"enter the employee name :"<<endl;
        cin>>name;
        cout<<"enter the basic salary :"<<endl;
        cin>>basic;
         
        }
        void calculate(){
            
            da=(0.52)*basic;
            it=(0.3)*basic;
            net_salary=(basic+da)-it;
        }
        void display(){
            
            cout<<"Name :"<<name<<endl;
            cout<<"Employee number :"<<emp_number<<endl;
            cout<<"Basic Salary :"<<basic<<endl;
            cout<<"Net Salary :"<<net_salary<<endl;
        }
};
int main(){int n;
    cout<<"enter the numbers of emplyee in the company"<<endl;
    cin>>n;
    employee emp[n];
    for(int i=0;i<n;i++){

        cout<<"enter the details of employee "<<i+1<<endl;
        emp[i].read();
        emp[i].calculate();


    }

 cout<<"-----------The details of the employees are ---------"<<endl;
    for(int i=0;i<n;i++){
       cout<<"the details of employee"<<i+1<<endl;
        emp[i].display();
        cout<<endl;
    }
}

