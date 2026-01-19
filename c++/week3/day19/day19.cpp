#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<int> v = {10,20,30,41,60,35,23,51};
    for (vector<int>::const_iterator it = v.begin(); it != v.end();){
        if(*it & 2 == 0){
            it = v.erase(it);
        }
        else 
            ++it;
    }
    for (vector<int>::const_iterator it = v.begin(); it != v.end();it++){
        cout << *it << " ";
    }
    return 0;
}