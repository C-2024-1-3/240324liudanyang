#include <iostream>
using namespace std;
int taozi10(int day,int taozi)
{
	if (day == 10 ) {
		return taozi;
}
	else {
		return taozi10(day + 1, (taozi * 2 + 2));
	}
}
int main()
{
	cout << "猴子第一天摘了" << taozi10(1,1)<<"个桃子" << endl;

}