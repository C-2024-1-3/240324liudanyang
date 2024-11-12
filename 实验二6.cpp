#include <iostream>
using namespace std;
int 公约数(int a,int b) {
    while (b != 0) {
        int c = b;
        b = a % b;
        a = c;
    }
    return a;
}
int 公倍数(int a, int b) {

    return a * b / 公约数(a, b);
}
int main()
{
    int a, b;
    cout << "输入第一个正整数" << endl;
    cin >> a;
    cout << "输入第二个正整数" << endl;
    cin >> b;
    cout << "最大公约数" << 公约数(a,b)<<endl;
    cout << "最小公倍数" << 公倍数(a, b) << endl;
}