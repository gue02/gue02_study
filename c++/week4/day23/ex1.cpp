#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    map<string, string> phoneBook;
    int n;
    string name, phone;
    do{
        cout << "1. Add\n" << "2. Find\n" << "3. Print All\n" << "0. Exit\n" << "Select: ";
        cin >> n;
        switch(n){
            case 1:{
                cin >> name >> phone;
                auto it = phoneBook.find(name);
                if(it != phoneBook.end()){
                    cout << "Already Exist.\n";
                    break;
                }
                else if(it == phoneBook.end()){
                    phoneBook[name] = phone;
                }
                break;
            }
            case 2:{
                cin >> name;
                auto it = phoneBook.find(name);
                if(it != phoneBook.end()){
                    cout << "->"<< it->second << endl;
                    break;
                }
                else if(it == phoneBook.end()){
                    cout << "Not Found.\n";
                }
                break;
            }
            case 3:{
                for(const auto& p : phoneBook) {
                    cout << "->"<< p.first << " " << p.second << "\n";
                }
                break;
            }
        }
    }while(n != 0);

    return 0;
}