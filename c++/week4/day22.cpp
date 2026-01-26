#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    map<string,int> scores;
    scores = {
        {"Kim",90},
        {"Lee",80},
        {"Park",85}
    };

    for(const auto& p : scores) {
        cout << p.first << " : " << p.second << "\n";
    }
    //key 기준 오름차순으로 정렬.
    auto it = scores.find("sim");
    if(it != scores.end()){
        cout << it->second;
    }
    else if(it== scores.end()){
        cout << "Not Found.";
    }
    return 0;
}