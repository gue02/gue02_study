#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<string> names;
    string input;

    cout << "이름을 입력하세요.(end 입력 시 종료)\n";

    while(true){
        cin >> input;

        if(input == "end")
            break;
        names.push_back(input);
    }

    cout << "\n 총 인원:" << names.size() << "\n";
    cout << "이름 목록\n";

    for(const string& name : names){
        cout << name << "\n";
    }

    return 0;
}