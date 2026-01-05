#include <iostream>
#include <vector>

using namespace std;


int main(){
    vector<int> v;
    int n;

    for (int i = 0; i < 5; i++){
        cin >> n;
        v.push_back(n);
    }

    cout << "size " << v.size() << endl;

    for (int x : v){
        cout << x << " ";
    }
    return 0;
}