#include <iostream>
using namespace std;
class student {
private: int num;
	   int mark;
public: int getm() {
	return mark;
};
	  int getn() {
		  return num;
	  }
	  student(int n, int s) {
		  num = n;
		  mark = s;
	  };

};
void max(student* students[], int size) {
	student* maxStudent = students[0];
	for (int i = 1; i < size; ++i) {
		if (students[i]->getm() > maxStudent->getm()) {
			maxStudent = students[i];
		}
	}
	cout << "成绩最高的学生学号是：" << maxStudent->getn() << endl;
}
int main(){
	student* students[5];
	int a[5], b[5];
	for (int i = 0; i < 5; ++i) {
		cin >> a[i];
		cin >> b[i];
	}

	for (int i = 0; i < 5; ++i) {
		students[i] = new student(a[i],b[i]);
	}

	max(students, 5);
	for (int i = 0; i < 5; ++i) {
		delete students[i];
	}
	
	return 0;
}