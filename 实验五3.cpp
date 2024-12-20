#include <iostream>
using namespace std;
class cuboid {
private:
    int length;
    int width;
    int height;
public:
    void vout();
    void cin1();
};
void cuboid::vout() {
    int v = length * width * height;
    cout << "体积是" << v << endl;
}
void cuboid::cin1() {
    cout << "length:";
    cin >> length;
    cout << '\n' << "width:";
    cin >> width;
    cout << '\n' << "height";
    cin >> height;
    cout << endl;
}
int main()
{
    cuboid cub1;
    cuboid cub2;
    cuboid cub3;
    cout << "1号长方体" << endl;
    cub1.cin1();
    cout << "2号长方体" << endl;
    cub2.cin1();
    cout << "3号长方体" << endl;
    cub3.cin1();
    cout << "1号长方体";
    cub1.vout();
    cout << "2号长方体";
    cub2.vout();
    cout << "3号长方体";
    cub3.vout();
}
