//Employee database
#include<iostream>
using namespace std;
class Employee {
    int empno;
    char ename[20];
    float basic, netpay, da, hra;
    float calculate(){
        netpay=basic+da+hra;
        return (netpay);
    }

    public:
    void havedata(){
        cout<<"Enter the name of employee: "; cin>>ename;
        cout<<endl<<"Enter the employee number: "; cin>>empno;
        cout<<"Enter Basic Pay: "; 
    }
};
