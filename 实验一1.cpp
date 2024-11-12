#include <iostream>
using namespace std;
int main()
{
    int k = 1;            //此处为解决变量k 故将k定义为整形变量 并且使其值为1
    int i = k + 1;        //引入了未声明变量k
    cout << i++ << endl;
    i = 1;            //i多次初始化，故直接i=1
    cout << i++ << endl;
    cout << "Welcome to C++" << endl;
    return 0;
}

