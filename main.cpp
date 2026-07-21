#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <limits>
#include <cctype>

using namespace std;

const string acc1 = "Jason";
const string pass1 = "404";
const string acc2 = "Mark";
float balance = 1000.00;
int choice;
char again;

int main()
{

    string input_acc;
    string input_pass;
    string input_acc2;

    cout << endl;
    cout << "***************************" << endl;
    cout << "**N4HUM ATM SIMPLE PROJECT**" << endl;
    cout << "***************************" << endl;
    cout << "\n\n";
    cout << "Enter your Account Name: ";
    cin >> input_acc;
    do
    {

        if (input_acc != acc1)
        {

            cout << "\n\nAccount not found. Please try again. ";
            cin >> input_acc;
        }

    } while (input_acc != acc1);

    system("cls");
    cout << "Please enter your Pasword: ";
    cin >> input_pass;
    system("cls");

    if (input_pass != pass1)
    {
        do
        {
            system("cls");
            cout << "Please try again. enter your password:  ";
            cin >> input_pass;
        } while (input_pass != pass1);
    }

    do
    {
        do
        {

            cout << "Select the following you want to do: " << endl;
            cout << "[1] Withdraw Money " << endl;
            cout << "[2] Transfer Money " << endl;
            cout << "[3] Check Balance  " << endl;
            cout << "[4] Exit " << endl;
            cout << "Enter your choice: ";

            cin >> choice;

            if (cin.fail())

            {

                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                system("cls");
                cout << "Invalid input. Choose 1-4 only. ";
            }

            else if (choice < 1 || choice > 4)
            {
                system("cls");
                cout << "Please enter a valid option (1-4)." << endl;
            }

        } while (choice < 1 || choice > 4);

        switch (choice)
        {

        case 1:
        {

            float withdraw;

            do
            {

                cout << "\nYou currently have " << balance << " How much do you want to withdraw?";
                cin >> withdraw;

                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    system("cls");
                    cout << "Invalid input. Please enter proper withdrawal amount. \n";
                    withdraw = 0;
                }
                else
                {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    if (withdraw <= 0)
                    {
                        cout << "\n Invalid amount. Please try again.";
                    }
                    else if (withdraw > balance)
                    {
                        cout << "\nInvalid amount. Please Try Again";
                    }
                }

            } while (withdraw <= 0 || withdraw > balance);

            balance -= withdraw;
            cout << "You have a successful withdrawal of " << withdraw << " and a balance of " << balance << endl;

            break;
        }

        case 2:
        {

            float transfer;

            do
            {
                cout << "\n Enter the account name to transfer: ";
                cin >> input_acc2;

                if (input_acc2 != acc2)
                {
                    cout << "\n\n Account not found. Please enter again: ";
                    cin >> input_acc2;
                }

            } while (input_acc2 != acc2);

            system("cls");

            do
            {
                cout << "\n\nEnter the transfering amount: ";
                cin >> transfer;

                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    system("cls");
                    cout << "\ninvalid input. Please enter the proper amount: ";
                    transfer = 0;
                }
                else
                {

                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    if (transfer <= 0)
                    {
                        cout << "\n Insufficient amount. Please try again: ";
                    }
                    else if (transfer > balance)
                    {
                        cout << "\n Invalid amount. Please try again: ";
                    }
                }

            } while (transfer <= 0 || transfer > balance);

            balance -= transfer;
            cout << "\n Amount of " << transfer << " has been transferred successfully to " << acc2 << endl;
            break;
        }

        case 3:
        {

            cout << "Your current balance is : " << balance << endl;
            break;
        }

        case 4:
        {

            cout << "Thanks for using my ATM!";
            break;
        }

        default:
            cout << "Invalid option please try again.";
            break;
        }

        if (choice != 4)
        {
            cout << "Do you want to proceed to new transacation? Y/N";
            cin >> again;
            system("cls");
        }

    } while (choice != 4 && (again == 'Y' || again == 'y'));

    cout << "\n ATM shutting down...";
    return 0;
}
