#include <iostream>
using namespace std;

int main()
{
    int gross, tax, installment, insurance, netsalary;
    string fname, mname, lname;

    cout << "Enter your first Name, middle Name & last Name" << endl;
    cin >> fname >> mname >> lname;
    cout << "Gross Salary: ";
    cin >> gross;
    cout << "Installment: ";
    cin >> installment;
    cout << "Insurance: ";
    cin >> insurance;
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
    return 0;
}
