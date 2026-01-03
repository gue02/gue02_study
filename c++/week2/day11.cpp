#include <iostream>

using namespace std;

class Resource{
    private:
        int *p;

    public:
        Resource(int v){
            p = new int(v);
            cout << "Allocated " << *p << endl;
        }
        ~Resource(){
            delete p;
            cout << "Deallocated!\n";
        }
};

int main(){
    Resource r(10);
    return 0;
}