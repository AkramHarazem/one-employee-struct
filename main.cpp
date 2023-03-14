#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h>
using namespace std;

struct address
{
    string city;
    int st_no,bl_no;
};

struct employee
{
    int code,age;
    string name;
    float gross,bouns,tax,netSal;
    address emp_add;
};

int main()
{
    employee emp1;

    cout<< "Enter employee's code: "<<endl;
    cin>> emp1.code;
    cout<< "Enter employee's age: "<<endl;
    cin>> emp1.age;
    cout<< "Enter employee's name: "<<endl;
    cin>> emp1.name;
    cout<< "Enter employee's gross salary: "<<endl;
    cin>> emp1.gross;
    cout<< "Enter employee's bouns: "<<endl;
    cin>> emp1.bouns;
    cout<< "Enter employee's tax: "<<endl;
    cin>> emp1.tax;
    cout<< "Enter employee's city: "<<endl;
    cin>> emp1.emp_add.city;
    cout<< "Enter employee's building no.: "<<endl;
    cin>> emp1.emp_add.bl_no;
    cout<< "Enter employee's street no.: "<<endl;
    cin>> emp1.emp_add.st_no;

    emp1.netSal=emp1.gross+emp1.bouns-emp1.tax;
    cout<<"\nEmployee name is "<<emp1.name<<", code: "<<emp1.code<<", age: "<<emp1.age<<" ,net salary: "<<emp1.netSal<<", city: "
        <<emp1.emp_add.city<<", street No.: "<<emp1.emp_add.st_no<<", Building No.: "<<emp1.emp_add.bl_no<<endl;

    return 0;
}
