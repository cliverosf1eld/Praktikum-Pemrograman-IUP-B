#include <iostream>
using namespace std;

int main()
{
    int gross, tax, installment, insurance, netsalary;
    string fname, mname, lname;

    fname = "Muhammad";
    mname = "Gibran";
    lname = "Basyir";
    gross = 1000;
    installment = 100;
    insurance = 200;
    tax = 0.2 * gross;
    netsalary = gross - tax - installment - insurance;
    cout << "Payslip for Employee" << endl;
    cout << "--------------------" << endl;
    cout << "Name: " << fname << " " << mname << " " << lname << " " << endl;
    cout << "Gross Salary = " << gross << endl;
    cout << "Tax (20%) = " << tax << endl;
    cout << "Installment = " << installment << endl;
    cout << "Insurance = " << insurance << endl;
    cout << "Net Salary = " << netsalary << endl;

    cout << "Test successfully run";
    return 0;
}
