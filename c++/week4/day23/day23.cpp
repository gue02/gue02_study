#include <iostream>
#include <set>

using namespace std;

int main(){
    int arr[] = {1,3,2,3,1,5};

    set<int> s(arr, arr +6);

    for (int x : s)
        cout << x << " ";

    return 0;
}
/*
set은 중복 허용 X, 이미 있으면 무시하고, 자동으로 정렬도 해줌.
중복을 허용하려면 multiset으로 허용 가능.
*/