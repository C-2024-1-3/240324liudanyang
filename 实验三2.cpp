#include<iostream>
using namespace std;
bool is_prime(int num) {
	int a,temp=1;
	for (a = 2;a < num ;a++)
	{
		temp = num % a;
		if (temp == 0) {
			return false;
			break;

		}
		
	}
	return true;
}
int main() {
	int a = 0;
	int b[200];
	int num = 2;
	while (a < 200) {
		
		if (is_prime(num)) {
			cout << num<<"\t";
			a++;
			if (a % 10 == 0) {
				cout << endl;
			}
		}
		num++;
	}
}