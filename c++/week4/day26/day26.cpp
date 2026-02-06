#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

struct student{
    string name;
    int score;
    student(string name, int s) : name(name),score(s) {} 
    void printstudent(){
        cout << name <<" "<< score << endl;
    }
};

bool cmp(student a, student b){
    return a.score > b.score;
}

int main(){
    vector<student> v;
    v.push_back(student("Kim",80));
    v.push_back(student("Kam",50));
    v.push_back(student("San",87));
    sort(v.begin(), v.end(), cmp);
    for(auto s:v){
        s.printstudent();
    }

    return 0;
}