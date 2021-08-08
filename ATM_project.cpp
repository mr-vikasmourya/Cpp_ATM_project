
/* C++ Program to implement the ATM management System */
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class Bank
{
private:
    string name;
    int accNumber;
    char type[10];
    int amount = 0;
    int tot = 0;

public:
    //Function to set the persons Data
    void setvalue()
    {
        cout << "Enter name\n";
        cin >> name;

        // //To use space in string
        getline(cin, name);

        cout << "Enter Account Number\n";
        cin >> accNumber;
        cout << "Enter account Type\n";
        cin >> type;
        cout << "Enter Balance\n";
        cin >> tot;
    }
    //Function Displays the Required data
    void showdata()
    {

        cout << " Name :" << name << endl;
        cout << " Account no. :" << accNumber << endl;
        cout << " Account Type: " << type << endl;
        cout << " Balance:" << tot << endl;
    }
    //Function to deposit The amount in Atm
    void deposit()
    {
        cout << "\nEnter amount to be Deposited\n";
        cin >> amount;
    }
    void showbal()
    {
        tot = tot + amount;
        cout << "\nTotal balance is: " << tot;
    }
    void withdrawl()
    {
        int a, available_balance;
        cout << "Enter amount to withdrwan\n";
        cin >> a;
        available_balance = tot - a;
        cout << "Available balance is " << available_balance;
    }
};
// Driver Code
int main()
{
    //Object of class
    Bank b;

    int choice;
    //infinite While loop to choose
    //options Everytime
    while (1)
    {
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~WELCOME~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~\n\n";
        cout << "Enter Your choice\n";
        cout << "\t1.Enter name ,Account "
             << "number,Account type,Balance\n";
        cout << "\t2.Balance Enquiry\n";
        cout << "\t3.Deposit Money\n";
        cout << "\t4.show Total Balance\n";
        cout << "\t5.Withdraw Money\n";
        cout << "\t6.cancel\n";
        cin >> choice;

        //Choices to select from
        switch (choice)
        {
        case 1:
            b.setvalue();
            break;
        case 2:
            b.showdata();
            break;
        case 3:
            b.deposit();
            break;

        case 4:
            b.showbal();
            break;
        case 5:
            b.withdrawl();
            break;
        case 6:
            exit(1);
            break;

        default:
            cout << "\n Invalid choices\n";
            break;
        }
    }
    return 0;
}
