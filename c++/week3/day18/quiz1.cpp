#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Student{
    int id;
    string name;
    int score;

    public:
        int getID(){
            return id;
        }
        string getName(){
            return name;
        }
        int getScore(){
            return score;
        }
        void setScore(int s){
            score = s;
        }
        Student(int i, string n, int s) : id(i), name(n), score(s) {}
};

class Manager{
    vector<Student> students;

    public:
        bool createStudent(int i, string n, int s) {
            auto it = find_if(students.begin(), students.end(),
            [&](const Student& s){
                 return s.getID() == i; 
                });
            if (it != students.end()) {
                cout << "You can't use that ID\n";
                return false;
            }
            students.push_back(Student(i,n,s));
            return true;
        }
        void readStudent(){
            if(students.size() == 0){
                cout << "Not enough student."
            }
            else{
                cout << "ID" "Name" "Score\n";
                for(const auto& s : students){
                    cout << s[i].id << " " << s[i].name << " " << s[i].score << endl;
                }
            }
        }
        bool updateStudent(int i, int ns){
            auto it = find_if(students.begin(), students.end(),
            [&](const Student& s){
                 return s.getID() == i; 
                });
            if (it != students.end()) {
                cout << "can't find that ID\n";
                return false;
            }
            
            
        }
};
