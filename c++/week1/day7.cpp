/*
문제 : 배열 요소 선택기 (참조 리턴 활용)

문제 설명 :
정수 배열과 인덱스를 받아
해당 요소를 참조로 반환하는 함수를 작성하시오.
그 다음,
참조로 반환받은 값은 수정 가능
포인터로 접근한 값은 읽기만 가능
하도록 프로그램을 완성하시오.
*/
#include <iostream>
using namespace std;

int& select(int arr[], int index);
void printByPointer(const int* p, int size);

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    select(arr, 1) = 999;
    select(arr, 3) = 777;

    printByPointer(arr, 5);

    return 0;
}
int& select(int arr[], int index){
    return arr[index];
}
void printByPointer(const int* p, int size){
    for(int i = 0; i < size; i++){
        cout << p[i] << " ";
    }
}
/*
참조 리턴의 필요 이유? 
1. 배열이나 변수가 함수나 클래스 내부에서 존재할 경우
즉 private 선언으로 인해 변수 변경이 메인에서 불가능할때 이를 바꾸려고 사용.

2. 인터페이스 통일. 내부 구조를 몰라도 실행 가능하도록 만드는 것.

3. 연산자 오버로딩. 
int& operator[](int index); 같은 방식으로 오버로딩 하게 만들려면 참조 리턴을 사용해야 함.

4. 연속 대입 및 체이닝. 
select(arr, 1) = select(arr, 2) = 100;
값 리턴이면 불가능하지만, 참조리턴은 가능함.

물론 반대로, 이를 굳이 사용할 필요 없는 경우(로컬 배열이거나, 메인에서 직접 접근 가능)는 사용 안함.
*/