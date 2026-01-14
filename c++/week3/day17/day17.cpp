#include <iostream>

using namespace std;

struct IntIterator{
    int* ptr;

    IntIterator(int* p) : ptr(p) {}

    int& operator*() {
        return *ptr;
    }

    IntIterator& operator++(){
        ++ptr;
        return *this;
    }

    bool operator!=(const IntIterator& other){
        return ptr != other.ptr;
    }
};

struct MyArray {
    int data[3] = {5,6,7};

    IntIterator begin() {
        return IntIterator(data);
    }
    IntIterator end(){
        return IntIterator(data + 3);
    }
};

int main(){
    int arr[3] = {10,20,30};
    MyArray arrs;

    for(int x:arrs){
        cout << x << " ";
    }

    IntIterator begin(arr);
    IntIterator end(arr+3);

    for(IntIterator it = begin; it != end; ++it) {
        cout << *it << " ";
    }

    return 0;
}