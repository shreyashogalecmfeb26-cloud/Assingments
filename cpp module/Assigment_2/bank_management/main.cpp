


#include<iostream>
#include<string>
#include"Bank.h"

using namespace std;



int main(){

    
    BankAccount account;  
    int choice;
    double amount;
    string name;
    long account_number;
    double deposit_amt;
     double withdraw_amt;
    

    do {
        cout << "\n===== BANK MENU =====\n";
        cout << "1.Register\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display Account Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

             case 1:
                cout << "Register Yourself... "<<endl;

                cout<<"Enter  Account Holder Name : ";
                 getline(cin >> ws,name);
                account.setaccountHolderName(name);

               
                cout<<"Enter Valid Account Number";
                cin>>account_number;

               if(!account.setAccountNum(account_number)) {
                 cout << "Try Again\n";
                 return 0;
                   }
                 cout<<endl;

                cout<<"Deposit some Money";
                cin>> deposit_amt;
               account.depositAmount( deposit_amt);

               cout<<"Current Balance: "<<account.getbalance() <<endl;
                
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin>> deposit_amt;
               account.depositAmount( deposit_amt);
                
               cout<<endl;
               cout<<"Amount Deposited Successfully"<<endl;

                cout<<"Current Balance: "<<account.getbalance() <<endl;
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
               cin>>withdraw_amt;

               account.withdrawAmount(withdraw_amt);
               cout<<endl;
               cout<<"Amount Withdraw successfully"<<endl;

             cout<<"Current Balance: "<<account.getbalance() <<endl;
                break;

            case 4:
                cout<<"Account Holder Name: "<<account.getaccountName()<<endl;
                 cout<<"Account Number: "<<account.getAccountNum() <<endl;
                  cout<<"Current Balance: "<<account.getbalance() <<endl;

                break;

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
                break;
        }

    } while(choice != 5);

    return 0;

}









