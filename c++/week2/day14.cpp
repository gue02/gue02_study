#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v = {10,20,30};

    for(auto it = v.begin();it != v.end(); it++){
        cout << *it << " ";
        *it += 10;
    }

    for(const auto& x:v){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}