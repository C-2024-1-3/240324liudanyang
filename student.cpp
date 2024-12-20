// student.cpp                     在此文件中进行函数的定义
#include <iostream>
#include<cstring>
#include "student.h"            //不要漏写此行，否则编译通不过

// 在类外定义display类函数
void Student::display()
{
    std::cout << "num：" << num << std::endl;
    std::cout << "name：" << name << std::endl;
    std::cout << "sex：" << sex << std::endl;
}

// 定义set_value函数，用于给类的数据成员赋初值
void Student::set_value(int num1, const char name1[], char sex1)
{
    num = num1;
    strcpy_s(name, name1);
    sex = sex1;
}