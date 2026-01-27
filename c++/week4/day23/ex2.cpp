#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    map<string, int> scores;
    int select, s;
    string n;
    do{
        cout << "1. Add\n" << "2. Find\n" << "3. Print All\n" << "0. Exit\n" << "Select: ";
        cin >> select;
        switch (select)
        {
        case 1:{
            cin >> n >> s;
            auto it = scores.find(n);
            if(it != scores.end()){
                cout << "Already Exist.\n";
            }
            else {
                scores[n] = s;
            }
            break;}
        case 2:{
            cin >> n;
            auto it = scores.find(n);
            if(it != scores.end()){
                cout << "->" << it->second << endl;
            }
            else {
                cout << "Not Found.\n";
            }
            break;}
        case 3:{
            for(const auto& s: scores){
                cout << s.first << " " << s.second << endl;
            }
            break;}
        case 0:
            break;
        }
        
    }while(select != 0);
    return 0;
}