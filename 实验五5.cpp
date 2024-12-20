#include <iostream>
using namespace std;
class point {
private:int x;
	    int y;
public: point() {
	x = 60;
	y = 80;
}
	  void setPoint(int i, int j);
	  void display();

};
void point::setPoint(int i, int j) {
	x = 60 + i;
	y = 80 + j;
};
void point::display() {
	cout << "(" << x << "," << y << ")" << endl;
};
int main(){
	point a;
	int c, d;
	a.display();
	cin >> c >> d;
	cout << endl;
	a.setPoint(c, d);
	a.display();
}