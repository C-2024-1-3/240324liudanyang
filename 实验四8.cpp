#include <iostream>
#include <cstring>
using namespace std;
int indexof(const char* s1, const char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for (int i = 0; i <= len2 - len1; i++) {
        int j;
        for (j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                break;
            }
        }
        if (j == len1) {
            return i;
        }
    }
    return -1;
}

int main() {
    char s1[100];
    char s2[100];
    cout << "请输入字符串s1：";
    cin.getline(s1, 100);
    cout << "请输入字符串s2：";
    cin.getline(s2, 100);

    int result = indexof(s1, s2);
    if (result != -1) {
        cout << "字符串s1是字符串s2的子串，第一次匹配的下标为：" << result << endl;
    }
    else {
        cout << "字符串s1不是字符串s2的子串" << endl;
    }

    return 0;
}