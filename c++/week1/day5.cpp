#include <iostream>

using namespace std;
void arrays(int *p, int size, int &max, int &sum){
    max = *p;
    for(int i = 0; i < size; i++){
        sum += *(p+i);
        if(*(p+i) > max){
            max = *(p+i);
        }
    }

    cout << "Sum : " << sum << endl;
    cout << "Max : " << max << endl;
}
int main(){
    int arrsize;
    int max;
    int sum;
    cout << "input array size" <<endl;
    cin >> arrsize;
    int arr[arrsize];
    for(int i = 0; i < arrsize; i++){
        if (i == 0)
            cout << "input 1st number" << endl;
        else if (i == 1)
            cout << "input 2st number" << endl;
        else
            cout << "input " << i+1 << "th number" << endl;

        cin >> arr[i];
    }
     arrays(arr,arrsize,max,sum);
    return 0;
}