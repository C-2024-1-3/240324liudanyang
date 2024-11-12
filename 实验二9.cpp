#include <iostream>
using namespace std;
int main() {
    int 日期 = 0, 购买量 = 2;
    double 总量 = 0.0, 日平均值;

    do {
        总量 += 购买量 * 0.8;
        日期++;
        购买量 *= 2;
    } while (购买量 <= 100);

    日平均值 = 总量 / 日期;
    cout <<"平均每天花费的钱数" << 日平均值 << endl;

    return 0;

}