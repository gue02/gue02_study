#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    map<string, vector<string>> subject;
    int n;
    
    cout << "input number : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        string sub, name;
        cin >> sub >> name;
        subject[sub].push_back(name);
    }
    
    for (auto& item : subject){
        sort(item.second.begin(), item.second.end());
    }

    while(true){
        int number;
        cout << "1. add / 2, show / 3. find / 0.exit\n";
        cout << "Select : ";
        cin >> number;

        switch(number){
            case "1" : {
                string sub, name;
                cin >> sub >> name;
                subject[sub].push_back(name);

                for (auto& item : subject){
                    sort(item.second.begin(), item.second.end());
                }
                break;
            }
            case "2" : {
                cout << "\n===== list =====\n";
                for(auto item : subject){
                    cout << item.first << " : " <<item.second;
                }
                break;
            }
            case "3" : {
                int fname
                cout << "name? :";
                cin >> fname;

                auto it = subject.find(fname);
                if(it != subject.end()){
                    cout << it.first << " : " ;
                    for(auto& name : it->second) {
                        cout << name << " , ";
                    }
                    cout << "\n";
                }
                else {
                    cout << "Not found.\n";
                }
            }
        }
    }
    return 0;
}