#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main(){
    map<string, vector<string>> group;

    group["CS"].push_back("A");
    group["CS"].push_back("B");
    group["CS"].push_back("C");

    map<int, vector<int>> score;
    score[1001] = vector<int>(5,0);
    score[1001][2] = 95;

    map<int, map<int, int>> w;
    w[1][5] = 10;

    map<int, vector<pair<int,int>>> adj;
    adj[1].push_back({5,10});
    return 0;
}