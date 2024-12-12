#include <iostream>
using namespace std;
void swap(double& a, double& b) {
    double t = a;
    a = b;
    b = t;
}
void bubbleSort(double list[], int listSize) {
    bool changed = true;
    do {
        changed = false;
        for (int j = 0; j < listSize - 1; j++) {
            if (list[j] > list[j + 1]) {
                swap(list[j], list[j + 1]);
                changed = true;
            }
        }
    } while (changed);
}

int main() {
    const int arraySize = 10;
    double numbers[arraySize];
    cout << "请输入10个双精度数字：" << endl;
    for (int i = 0; i < arraySize; i++) {
        cin >> numbers[i];
    }
    bubbleSort(numbers, arraySize);
    cout << "排序后的数组：" << endl;
    for (int i = 0; i < arraySize; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;