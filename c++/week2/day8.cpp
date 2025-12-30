#include <iostream>

using namespace std;

void question1(){
    /* 
    문제 설명

    정수 N을 입력받아
    크기 N의 동적 배열을 생성하고,
    배열에 정수 N개를 입력받은 뒤 다음을 구하시오.

    1. 배열의 총합
    2. 배열의 평균
    3. 배열의 최댓값 
    */
    int arr_size;
    cout << "input arr size" << endl;
    cin >> arr_size;
    int* arr = new int[arr_size];
    int sum = 0;
    int aver = 0;
    int max;
    for (int i = 0; i < arr_size; i++){
        cout << "input int" << endl;
        cin >> arr[i];
        if (i == 0){
            max = arr[i];
            sum += arr[i];
        }
        else{
            sum += arr[i];
            if( arr[i] > max){
                max = arr[i];
            }
        }
    }
    aver = sum / arr_size;
    cout << "Sum :" << sum << endl;
    cout << "Average :" << aver << endl;
    cout << "Max :" << max << endl;

    delete[] arr; //array면 delete[]로 초기화
    arr = nullptr;
}

void question2(){
    int* sortArray(const int* arr, int size){
        int* sort = new int[size];
        for(int i = 0; i < size; i++){
            sort[i] = arr[i];
        }
        int min,minindex,temp;
        for(int i = 0; i < size; i++){
            min = sort[i];
            minindex = i;
            for(int j = i; j < size; j++){
                if(min > sort[j]){
                    min = sort[j];
                    minindex = j;
                }
            }
            /* bubble sort 방식
            for (int i = 0; i < size - 1; i++) {
                for (int j = 0; j < size - 1 - i; j++) {
                    if (sorted[j] > sorted[j + 1]) {
                        int temp = sorted[j];
                        sorted[j] = sorted[j + 1];
                        sorted[j + 1] = temp;
                    }
                }
            }
            */
            temp = sort[i];
            sort[i] = sort[minindex];
            sort[minindex] = temp;
        }
        return sort;
    }
    int size;
    cout << "input arr size" << endl;
    cin >> size;
    int* arr = new int[size];
     for (int i = 0; i < size; i++){
        cout << "input int" << endl;
        cin >> arr[i];
    }
    cout << "Original : ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int* sort_arr = sortArray(arr,size);
    cout << "Sorted : " ;
     for(int i = 0; i < size; i++){
        cout << sort_arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    delete[] sort_arr;
}
    /*정수 N을 입력받아
    크기 N의 동적 배열을 생성하고 정수 N개를 입력받는다.

    그 후,
    배열을 오름차순으로 정렬한 새로운 동적 배열을 만들어 반환하고
    원본 배열과 정렬된 배열을 각각 출력하시오.*/

int main(){
    
    return 0;
}