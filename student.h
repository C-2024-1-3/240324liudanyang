#pragma once
//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
class Student              //������
{
public:
    void display();
    void set_value(int num1, const char name1[], char sex1); // ����������ֵ�ĳ�Ա��������
    Student(int a = 0,  const char name1[2]="����", char c = 'm') {
        num = a;//Ĭ��Ϊ��
        strcpy_s(name, name1);//Ĭ������
        sex = c;//Ĭ��m
    }
    ~Student()
    {
        
    }
private:
    int num;
    char name[20];
    char sex;

};