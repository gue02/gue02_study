#include <iostream>

using namespace std;

class BankAccount {
    private:
        int balance;
    public:
        BankAccount(int initial){
            if(initial < 0)
                balance = 0;
            else
                balance = initial;
        }
        void deposit(int balance){
            if(balance > 0){
                this->balance += balance;
                //객체의 멤버 변수를 가리키며, balance가 매개변수와 멤버 변수에서 겹친다.
            }
        }
        bool withdraw(int amount){
            if(balance >= amount && amount > 0){
                balance -= amount;
                return true;
            }
            return false;
        }
        int getBalance() const{
            return balance;
        }
};
class Counter {
    private:
        int value;
    public:
        Counter& add(int x){
            value += x;
            return *this; // 자기자신 변환하는 this
        }
};


int main(){
    BankAccount acc(1000);
    acc.deposit(500);
    acc.withdraw(300);
    cout << acc.getBalance();  // 1200

    Counter c;
    c.add(3).add(5).add(2);
}