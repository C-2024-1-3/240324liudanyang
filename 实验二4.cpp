#include <iostream>
using namespace std;
int main()
{
    double a, b;
    char c;

    cout << "请输入你想进行的运算" << endl;
    cin >> c;
    switch (c)
    {
    case '+':
        cout << "请输入你想进行运算的两个数据" << endl;
        cin >> a >> b;
        cout << a + b << endl;
        break;
    case '-':
        cout << "请输入你想进行运算的两个数据" << endl;
        cin >> a >> b;
        cout << a - b << endl;
        break;
    case '*':
        cout << "请输入你想进行运算的两个数据" << endl;
        cin >> a >> b;
        cout << a * b << endl;
        break;
    case '/':
        cout << "请输入你想进行运算的两个数据，顺序为被除数和除数" << endl;
        cin >> a >> b;
        if (b == 0) {
            cout << "输入的除数不合法" << endl;
            break;

        }
        else
        {
            cout << a / b << endl;
            break;
        }

    case '%':
        cout << "请输入你想进行运算的两个数据，顺序为第一个输入的数%第二个输入的数" << endl;
        cin >> a >> b;
        cout << static_cast<int>(a) % static_cast<int>(b) << endl;
        break;
    default :
        cout << "运算符不合法" << endl;
    }
    return 0;
}
