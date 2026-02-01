#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

struct Student {
    int score;
    string name;
};

bool cmp(Student a, Student b){
    return a.score > b.score;
}
int main(){
    vector<int> v = {4,1,3,2};
    sort(v.begin(), v.end());
    for(auto x:v){
        cout << x << " ";
    }
    cout << endl;
    auto it = find(v.begin(),v.end(),5);
    if( it != v.end())
        cout << "found.";
    else
        cout << "Not found.";
    return 0;
}
/*
sort{
정렬 방식. O(N log N)
< 또는 비교 함수를 적용.
random access iterator가 필요함.
}
find{
값 탐색. O(N)
== 비교.
정렬 여부와 상관없이 시간 소요.
}
vector{
sort 가능. find도 가능.
빠른 탐색을 원하는 경우에는 binary_search 방식 사용.
binary_search(v.begin(), v.end(), 5);
lower_bound(v.begin(), v.end(), 5);
해당 두 방식을 사용하는 편이 sort 정렬 활용 후 시간 소요가 감소함.
}
*/