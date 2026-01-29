#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
struct Student{
    int score;
    string name;
    Student(int s, string n) : score(s), name(n) {}
    bool cmp(Student a, Student b){
        return a.score > b.score;
    }
};

bool cmp(int a, int b){
    return a > b;
}

int main(){
    vector<int> v = {4,1,3,2};
    sort(v.begin(), v.end());
    for(auto x:v){
        cout << x << " ";
    }
    cout << endl;
    sort(v.begin(), v.end(), cmp);
    for(auto x:v){
        cout << x << " ";
    }
    cout << endl;

    auto it = lower_bound(v.begin(), v.end(), 4);
    if (it != v.end())
        cout << "찾음\n";
    else
        cout << "못 찾음\n";
    return 0;
}