#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

using namespace std;

struct Student{
    string name;
    int score;
    Student (string name, int score){
        this->name = name;
        this->score = score;
    }
};

bool cmp (Student a, Student b){
    return a.score > b.score;
}
int main(){
    vector<int> v = {5,3,4,1,2,8};

    sort(v.begin(), v.end(), greater<int>());
    for (auto x : v){
        cout << x;
    }
    cout << "\n";

    vector<Student> s;
    s.push_back(Student("Kim", 78));
    s.push_back(Student("Han", 80));
    s.push_back(Student("Gang" , 67));
    s.push_back(Student("Choi", 75));
    sort(s.begin(), s.end(), cmp);
    for (auto x : s){
        cout << x.name << " : " << x.score;
        cout << "\n";
    }
    auto it = find(v.begin(), v.end(), 4);
    if(it != v.end()){
        cout << "Found.\n";
    }
    else {
        cout << "Not Found.\n";
    }

    map<string, int> score;
    score["Kim"] = 90;
    score["Lee"] = 80;
    score["Park"] = 95;

    vector<pair<string,int>> f(score.begin(), score.end());

    sort(f.begin(), f.end(),[](auto a, auto b){
        return a.second > b.second;
    });
    return 0;
}