#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int c = 0;
    if (*b > *a) {
        c = *b;
        *b = *a;
        *a = c;
    }
}
int 最大公约数(int a, int b) {
    int c = 0;

    while (a != 0) {
        c = a;
        a = b % a;
        b = c;

    }
    return c;
}
void 公倍数和公因数(int a,int b,int &c,int &d) {
    c = 最大公约数(a,b);
    d = a * b / c;

}
int main()
{
    int a, b;
    cout << "请输入第一个数\t";
    cin >> a ;
    cout << "请输入第二个数\t";
    cin >> b;
    swap(&a, &b);
    int c, d;
    公倍数和公因数(a, b, c, d);

    cout<<"最大公约数"<<c<<endl;
    cout << "最小公倍数" << d << endl;

}

