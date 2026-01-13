#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct BankAccount{
    private:
        string owner;
        int balance;
    public:
        BankAccount(string o, int b):owner(o),balance(b) {}
        
        void deposit(int amount) {
            if(amount > 0) balance += amount;
        }
        string getOwner() const {
            return owner;
        }
        int getBalance() const {
            return balance;
        }

        void print() const {
            cout << owner << " : " << balance << "\n";
        }
};

int main(){
    vector<BankAccount> accounts;

    accounts.push_back(BankAccount("Kim", 1000));
    accounts.push_back(BankAccount("Lee", 2000));

    for(const auto& acc:accounts){
        acc.print();
    }

    for(auto& acc:accounts){
        acc.deposit(500);
    }

    sort(accounts.begin(), accounts.end(), [](const BankAccount& a, const BankAccount& b){
        return a.getBalance() < b.getBalance();
    });

    for(const auto& acc:accounts){
        acc.print();
    }
    
    for(const auto& acc : accounts){
        if(acc.getOwner() == "Kim"){
            cout << "Find Him!" << endl;
        }
    }
    return 0;
}