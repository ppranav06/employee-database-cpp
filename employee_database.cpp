//Employee database
#include<iostream>
#include<iomanip>
using namespace std;
class employee {
    int empno;
    char ename[20];
    float basic, netpay, da, hra, da_p, hra_p;
    float calculate() {
	da=basic*da_p/100;
	hra=basic*hra_p/100;
        netpay=basic+da+hra;
        return (netpay);
    }

    public:
    void havedata() {
        cout<<endl<<"Enter the employee number: "; cin>>empno;
        cout<<"Enter the name of employee: "; cin>>ename;     
        cout<<"Enter Basic Pay: "; cin>>basic;
        cout<<"Enter Dearness Allowance (%): "; cin>>da_p;
        cout<<"Enter House-Rent Allowance (%): "; cin>>hra_p;
        calculate();
    }

    void dispdata() {
        cout<<setw(25)<<"Employee name: "<<setw(5)<<ename<<endl;
        cout<<setw(25)<<"Employee number: "<<setw(5)<<empno<<endl;
        cout<<setw(25)<<"-----------------------------------"<<endl;
        cout<<setw(25)<<"Basic Pay: "<<setw(5)<<basic<<endl;
        cout<<setw(25)<<"Dearness Allowance: "<<setw(5)<<da<<endl;
        cout<<setw(25)<<"House Rent Allowance: "<<setw(5)<<hra<<endl;
        cout<<setw(25)<<"-----------------------------------"<<endl;
        cout<<setw(25)<<"Net Pay: "<<setw(5)<<netpay<<endl;
        cout<<setw(25)<<"-----------------------------------"<<endl;
    }
};

int main() {
    system("clear");
    employee e1;
    int op;
    start:
    cout<<"Employee database"<<endl<<endl;
    cout<<"1. Enter employee details"<<endl<<"2. Display employee details"<<endl<<"3. Exit";
    cout<<endl<<"Choice [1/2/3]: "; cin>>op;
    switch(op) {
        case 1:
        e1.havedata();
        goto start;
        break;

        case 2:
        e1.dispdata();
        goto start;
        break;

        case 3: break;
        default: cout<<"Invalid option";
    }
    return 0;
}
