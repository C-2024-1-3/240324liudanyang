
#include <iostream>
using namespace std;
int main()
{
    const double pai = 3.1415926;
    double r,h;
    cout << "请输入圆锥高度" << endl;
    cin >> h;
    cout << "请输入圆锥底面半径" << endl;
    cin >> r;
    long double v = r * r * h * pai / 3;
    cout << v << endl;
    return 0;
}

