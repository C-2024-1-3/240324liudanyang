#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为私有的
		int hour;
	int minute;
	int sec;
public:               // 函数是公用的
 	void out();       //输出
	void in();        //输入
};
void Time::out() {
	cout << hour << ":" << minute << ":" << sec << endl;
}
void Time::in() {
	cout << "请按顺序输入小时、分钟、秒数" << endl;
	cin >> hour >> minute >> sec;
	cout << '\n';
}
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.in();           //.使用函数
	t1.out();
	return 0;
}