#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>

using namespace std;

    const string acc1 = "Jason";
    const string pass1 = "404";
    float balance = 1000.00;
    

int main () 
{


    string input_acc;
    string input_pass;

    do
    {
        cout << "***************************"<<endl;
        cout << "**N4HUM ATM SIMPLE PROJECT**"<<endl;
        cout << "***************************"<<endl;
        cout << "\n\n\n\n";
        cout << "Enter your Account Name: ";
        cin >> input_acc;
        
        if (input_acc != acc1) {

           
            cout << "Account not found";
             system("cls");
        }
    } while (input_acc != acc1);
    
     system("cls");
        cout << "Please enter your Pasword: ";
        cin >> input_pass;

    if (input_pass != pass1)
    {
        do
        { system("cls");
            cout << "Please try again. enter your password:  ";
            cin >> input_pass;
        } while (input_pass != pass1);
        
    }

    
    int choice;
    char again;

    cout << "Select the following you want to do: " << endl;
    cout << "[1] Withdraw Money " << endl;
    cout << "[2] Transfer Money " << endl;
    cout << "[3] Check Balance  " << endl;
    cout << "[4] Exit " << endl;

    cin >> choice;


    switch (choice){
    
    case 1:{

        float withdraw;

        do
        {
        cout << " You currently have " << balance << " how much do you want to withdraw? ";
        cin >> withdraw;
        cout << "Insufficient Funds, Try Again. " << endl;
        } while (withdraw > balance);
        balance-= withdraw;
        cout << "Withdraw sucessful. Total Balance is " << balance << endl;
        


        break;
    }

    case 2: {
        string acc2;
        float transfer;
        

        do
        {
             cout << "Enter the transfer acccount: ";
             cin >> acc2;
             system("cls");
             if (acc2 != "Mark")
             {
                cout << "Account not found" << endl;
             }
             

        } while (acc2 != "Mark");

        cout << "Enter the transfer balance: " ;
        cin >> transfer;
        

        if (transfer > balance)
        {
            cout << "Insufficient Funds!";
        } else {
            balance -= transfer;
            cout << "Transfer Complete to " << acc2 << endl;
            cout << "Your current balance now is: " << balance << endl;
            
        }
         break;
    }

    case 3:{

        cout << "Your current balance is : ";
        break;
     }
    

    case 4: {

        cout << "Thanks for using my ATM!";
        break;
    }


    default:
        cout << "Invalid option please try again.";
        break;
    
}
    if (choice != '4')
    {
        cout << "Do you want to proceed to new transacation? Y/N";
        cin >> again;
    }
    
    system("cls");

    while (choice !=4 && (again == 'Y' || again == 'y'));
}

