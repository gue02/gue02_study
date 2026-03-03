#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    map<string,vector<string>> subjects;
    int q;

    cout << "명령 수 입력 : ";
    cin >> q;

    for(int i = 0; i < q; i++){
        int select;
        cout << "1. 과목 추가 \n";
        cout << "2. 과목 찾기 \n";
        cout << "3. 출력 \n";
        cout << "입력 : ";
        cin >> select;
        
        switch(select){
            case 1 :{
                string subjectName, studentName;
                cin >> subjectName >> studentName;
                subjects[subjectName].push_back(studentName);
                break;
            }
            case 2: {
                string subjectName;
                cin >> subjectName;
                auto it = subjects.find(subjectName);
                if (it != subjects.end()){
                    sort(subjects.begin(),subjects.end());
                    for(const auto& [sub,students] : subjects){
                        cout << sub << " : ";
                        for(const auto& name : students){
                            cout << name << " ";
                        }
                        cout << "\n";
                    }
                }
                else{
                    cout << "Not Found.\n";
                }
                break;
            }
            case 3:{
                for(const auto& [sub,students] : subjects){
                        cout << sub << " : ";
                        for(const auto& name : students){
                            cout << name << " ";
                        }
                        cout << "\n";
                    }
            }
        }
    }

    return 0;
}