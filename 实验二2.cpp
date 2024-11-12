#include <iostream>
using namespace std;
int main()
{
double x,y;
cout << "请输入一个数字\n";
cin >> x; 
if (0 < x &&x < 1) {
	y = 3 - 2 * x;
	cout << y  << endl;
}
else if (1<=x&&x<5) {
	cout << static_cast<double>(2/4)/ x + 1<<endl;

}
else if (5<=x&&x<10) {
	cout << x * x << endl;
}
else cout << "输入的数字不符合表达式\n";
return 0;
}

