#include <iostream>
using namespace std;

int main() {
    int 英文字母 = 0;  
    int 空格 = 0; 
    int 数字字符 = 0;  
    int 其他字符 = 0; 

    char c;
    while ((c = getchar()) != '\n') {  
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) { 
            英文字母++;
        }
        else if (c == ' ') {  
            空格++;
        }
        else if (c >= '0' && c <= '9') {  
            数字字符++;
        }
        else { 
            其他字符++;
        }
    }

    cout << "英文字母的个数: " << 英文字母 << endl;
    cout << "空格的个数: " << 空格 << endl;
    cout << "数字字符的个数: " << 数字字符 << endl;
    cout << "其他字符的个数: " << 其他字符 << endl;

    return 0;
}