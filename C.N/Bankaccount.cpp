#include<iostream>
using namespace std;
class BankAccount
{
    private:
        string name;
        int AccountNO;
        float currentAmount;
        static int nextAccountNO;

    public:
        BankAccount(string name,float currentAmount)
        {
            this->name=name;
            this->currentAmount=currentAmount;
            AccountNO=generateAccountNO();
        }
        static int generateAccountNO()
        {
            return++nextAccountNO;
        }
        void printBankAccount()
        {
            cout<<"Enter the Account holder name:"<<name<<endl;
            cout<<"Enter the Account number of the Account holder:"<<AccountNO<<endl;
            cout<<"Enter the current balance of the Account holder:"<<currentAmount<<endl;
        }
};
int BankAccount::nextAccountNO=0;
    int main()
    {
        BankAccount account1("Umesh",2000),account2("pritam",3000);
         
        account1.printBankAccount();
        account2.printBankAccount();
    }