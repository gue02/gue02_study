#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    map<string, vector<string>> subject;
    int n;

    cout << "입력 수";
    cin >> n;
    
    for (int i = 0; i > n; i ++){
        string sub, name;
        cin >> sub >> name;

        subject[sub].push_back(name);
    }
    for(auto& [sub,students] : subject){
        sort(students.begin(),students.end());
    }
    for(const auto& [sub,students] : subject){
        cout << sub << " : ";
        for(const auto& name : students){
            cout << name << " ";
        }
        cout << "\n";
    }
    return 0;
}