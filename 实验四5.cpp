#include <iostream>
#include <string>
using namespace std;
int main() {
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;
    int result = s2.find(s1);
    if (result != string::npos) {
        cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << result << std::endl;
    }
    else {
        cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << -1 << std::endl;
    }
    return 0;
}