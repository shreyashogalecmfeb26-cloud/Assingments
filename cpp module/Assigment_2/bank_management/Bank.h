 #ifndef  Bank_H_
#define Bank_H_
#include<iostream>
 #include<string>

class BankAccount {

    int AccountNumber;
    std::string accountHolderName;
    double  balance;
    double deposit;
    

public:

BankAccount(){
int AccountNumber = 0;
double balance = 0.00;
std:: string accountHolderName ="";
}

bool setAccountNum(int num){
    
    if(num <= 0 || num > 1000000000) {
        std::cout << "Invalid account\n";
        return 0;
    }else if(num == AccountNumber) {
        std::cout << "Account number already exists\n";
        return 0 ;
    }else
    this->AccountNumber = num;
    return 1;
}

void setaccountHolderName(std ::string name){
    if(name == ""){
        std:: cout<<"enter the name";
        return;
    }
    this->accountHolderName = name;
}

void setbalance(double bal){
    if(bal< 0){
        std:: cout<<"invalid amount";
        return;
    }
   this-> balance = bal;
}

int getAccountNum() const{
   std::cout<<AccountNumber;
}

std:: string getaccountName() const{
  return accountHolderName;
}

double getbalance() const{
   return balance;
}

void depositAmount(double DipositAmount){
     if(DipositAmount < 0){
        std:: cout<<"invalid amount";
        return;
    }
   this-> balance = this->balance + DipositAmount;
}

void withdrawAmount(double withdrawAmount ){
     if(withdrawAmount < 0){
        std:: cout<<"invalid amount";
        return ;
    }
    this->balance = this->balance - withdrawAmount;
}


};



#endif