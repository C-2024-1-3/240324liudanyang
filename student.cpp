// student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include<cstring>
#include "student.h"            //��Ҫ©д���У��������ͨ����

// �����ⶨ��display�ຯ��
void Student::display()
{
    std::cout << "num��" << num << std::endl;
    std::cout << "name��" << name << std::endl;
    std::cout << "sex��" << sex << std::endl;
}

// ����set_value���������ڸ�������ݳ�Ա����ֵ
void Student::set_value(int num1, const char name1[], char sex1)
{
    num = num1;
    strcpy_s(name, name1);
    sex = sex1;
}