#include <iostream>
using namespace std;

int main()
{
	char a;
	cout << "请输入一个字符" << endl;
	cin >> a;
	if (97 <=a &&a <= 122) {
		a -= 32;
		cout << "你输入的是小写字符的，故输出对应大写字符" << a << endl;
	}
	else if (41 <= a&&a <= 90){ 
		cout << "你输入的是大写字符，所以输出后继字母ASCII值" << (int)(a + 1) << endl; 
	}
	
    else cout << "你输入的不是英语字符，故无法输出" << endl;
	return 0;
}