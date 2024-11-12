#include <iostream>
using namespace std;

int main()
{
	double a,b,c,d;
	cout << "请输入三角形三边" << endl;
	cin >> a >> b >> c;
	if (a < b + c && b < a + c && c < a + b) {
		d = a + b + c;
		cout << "三角形的周长为" << d << endl;
		if (a == b || b == c) {
			if (a == b && b == c) {
				cout << "这个三角形是等边三角形" << endl;
			}
			else {
				cout << "这个三角形是等腰三角形" << endl;
			}
		}
		else {
			cout << "这个三角形不是等边三角形" << endl;
		}
	}
	else cout << "这三条边并不能构成一个三角形" << endl;
	return 0;
}

