#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student {
    string name;
    int score;
};

int main(){
    vector<Student> students;
    Student s;
    int sum, count = 0;
    int max;
    string maxst;
    double average;

    cout << "input name, score (if input end >> exit input.)\n";
    while(true){
        cin >> s.name;
        if(s.name == "end")
            break;
        cin >> s.score;
        
        students.push_back(s);
    }
    for(const auto& st : students){
        count++;
        if (count == 1){
            max = st.score;
            maxst = st.name;
        }
        else if(st.score > max){
            max = st.score;
            maxst = st.name;
        }
        cout << "\n"<< st.name << " " << st.score;
        sum += st.score;
    }
    average = sum / count;
    cout << "\nAverage Score : " << average << endl;
    cout << "1st Score Student : " << maxst << "(" << max << ")\n";

    return 0;
}