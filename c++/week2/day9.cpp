#include <iostream>

using namespace std;

struct Student {
    string name;
    int age;
    double height;
};

int main(){
    Student* arr = new Student[3]{
        {"Kim", 20, 175.5},
        {"Lee", 22, 180.2},
        {"Park", 19, 168.0}
    };

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2 - i; j++){
            if (arr[j].height > arr[j+1].height) {
                Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        cout << arr[i].name << " " << arr[i].age << " " << arr[i].height << "\n";
    }

    delete[] arr;
    return 0;
}