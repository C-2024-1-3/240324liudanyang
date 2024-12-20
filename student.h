#pragma once
//student.h                (这是头文件，在此文件中进行类的声明)
class Student              //类声明
{
public:
    void display();
    void set_value(int num1, const char name1[], char sex1); // 新增的设置值的成员函数声明
    Student(int a = 0,  const char name1[2]="张三", char c = 'm') {
        num = a;//默认为零
        strcpy_s(name, name1);//默认张三
        sex = c;//默认m
    }
    ~Student()
    {
        
    }
private:
    int num;
    char name[20];
    char sex;

};