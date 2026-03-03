#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Post {
    int id;
    string title;
};

vector<Post> posts;
map<int, int> id2idx;

auto addPost = [&](Post p){
    id2idx[p.id] = (int) posts.size();
    posts.push_back(p);
};

auto findPost = [&](int id) -> Post* {
    auto it = id2idx.find(id);
    if (it == id2idx.end()) return nullptr;
    return &posts[it->second];
};
int main(){
map<string, int> cnt;
cnt["apple"]++;
cnt["banana"] += 3;

vector<pair<string, int>> v(cnt.begin(), cnt.end());
sort(v.begin(),v.end(), [](auto &a, auto &b){
    return a.second > b.second;
});

map<int, vector<string>> bucket;
bucket[3].push_back("cat");
bucket[5].push_back("apple");
}
