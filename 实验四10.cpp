#include <iostream>
using namespace std;
void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int numElements;
    cout << "请输入数组元素个数: ";
    cin >> numElements;
    int* dynamicArray = new int[numElements];
    cout << "请依次输入数组元素: ";
    for (int i = 0; i < numElements; i++) {
        cin >> dynamicArray[i];
    }
    bubbleSort(dynamicArray, numElements);
    cout << "排序后的数组元素为: ";
    for (int* p = dynamicArray; p < dynamicArray + numElements; p++) {
        cout << *p << " ";
    }
    cout << endl;
    delete[] dynamicArray;
    return 0;
}