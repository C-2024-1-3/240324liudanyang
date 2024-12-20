//main.cpp                      主函数模块
#include <iostream>
#include<cstring>
#include "student.h"

int main()
{
    Student stud;
    Student stud1;
    // 使用set_value函数给stud1对象的数据成员赋初值
    stud1.set_value(007, "tcg", 'm');
    stud.display();
    stud1.display();
    return 0;
}