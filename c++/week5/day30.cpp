#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    map<int, vector<string>> level;
    int input;

    cout << "Input count : ";
    cin >> input;

    for(int i = 0; i < input; i ++){
        int c;
        string name;
        cin >> c >>  name;

        level[c].push_back(name);
    }
    sort(level.begin(),level.end());
    while(true){
        int number;
        cout << "1. find / 2. show / 0. Exit.\n";
        cin >> number;

        switch(number){
            case 1: {
                string whos;
                cin >> whos;
                auto it = find(level.begin(),level.end(),whos);
                if(it != level.end()){
                    
                }
                else {
                    cout << "Not Found.\n";
                    break;
                }
            }
        }

    }
    return 0;
}