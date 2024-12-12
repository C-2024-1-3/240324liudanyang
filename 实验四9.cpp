#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int parseHex(const char* const hexString) {
    int result = 0;
    int len = strlen(hexString);
    for (int i = 0; i < len; i++) {
        char ch = hexString[len - 1 - i]; 
        int digit;
        if (isdigit(ch)) {
            digit = ch - '0';
        }
        else if (isalpha(ch)) {
            ch = toupper(ch);
            digit = ch - 'A' + 10;
        }
        else {
            return 0;
        }
        result += digit * (1 << (4 * i));
    }
    return result;
}

int main() {
    char hexInput[100];
    cout << "请输入十六进制数：";
    cin >> hexInput;

    int decimal = parseHex(hexInput);
    cout << "转换后的十进制数为：" << decimal << endl;

    return 0;
}