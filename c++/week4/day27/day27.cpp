#include <map>
#include <iostream>
#include <string>

using namespace std;

int main(){
    map<int,string> m;
    m[1] = "apple";
    m[2] = "banana";

    auto it = m.find(2); // find를 통해 특정 iterator를 반환하여 값 접근

    if(it != m.end())
        cout << it->second << endl;
    else
        cout << "없음\n";

    if(m.count(3)) // count를 통해 존재 여부를 0,1로 확인이 가능하다.
        cout << "존재함";
    else
        cout << "없음.\n";

    map<int, int> m2;
    m2[10] = 100; //배열처럼 해당 값에 접근이 가능하다.
    cout << m2[10]; // 빈 배열이면 디폴트값이 적용된다. ex) m[99] = 0;
    return 0;
}