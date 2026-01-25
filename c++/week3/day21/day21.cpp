#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    map<string, int> scores; //"Kim"(key) -> 90(value) 
    //key는 중복 X. 자동으로 정렬되며 인덱스가 따로 존재하지 않는다.

    scores["Kim"] = 90; //value 미 입력시 디폴트값은 int일때는 0.
    scores["Lee"] = 80; //이름을 입력하지 않으면 자동으로 생성해준다. 

    cout << scores["Kim"] << endl; //90

    auto it = scores.find("Kim"); // find를 통해 안전하게 접근.

    if(it != scores.end()) { 
        cout << it-> second;
    }

    for (const auto& pair : scores) { // pair의 타입은 pair<const string, int>
        cout << pair.first << " : " << pair.second << "\n"; 
    } //first = key, second = value

    for (auto it = scores.begin(); it != scores.end(); ++it){
        cout << it->first << " : " << it->second << "\n";
    }

    if (scores.find("Kim") != scores.end()){
        cout << "Exist\n" // find 방식.
    }
    if (scores.count("Kim")) {
        cout << "Exists\n";
    }
    return 0;
}