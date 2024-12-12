#include <iostream>
#include <cctype>
using namespace std;
// 计算字符串中每个字母出现的次数
void count(const char s[], int counts[]) {
    for (int i = 0; s[i] != '\0'; ++i) {
        if (isalpha(s[i])) {
            char lowerChar = tolower(s[i]);
            counts[lowerChar - 'a']++;
        }
    }
}

int main() {
    char str[100];
    int counts[26] = { 0 };

    cout << "Enter a string: ";
    cin >> str;

    count(str, counts);

    cout << "字母出现的次数:\n";
    for (int i = 0; i < 26; ++i) {
        if (counts[i] != 0) {
            cout << static_cast<char>('a' + i) << ": " << counts[i] << '\n';
        }
    }
    return 0;
}