#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a;
    cout << "请输入你想输入得到其的平方根的数" << endl;
    cin >> a;
    if (a < 0) { cout << "输入的是负数" << endl; }
    else {
        double xn = a;
        double 判断值 = 1;
        while ( 判断值> 0.0001) {
            double xn1 = 0.5*(xn + a / xn);
            判断值 = fabs(xn1 - xn);
            xn = xn1;
        }
        cout <<a<<"的平方根是" << xn << endl;
    }
}