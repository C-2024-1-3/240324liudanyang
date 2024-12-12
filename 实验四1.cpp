#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> a;
    int b;

    cout << "Enter ten numbers:" << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> b;
        a.insert(b); 
    }

    cout << "The distict numbers are:" << endl;
    for (const auto& c : a) {
        cout << c <<"\t";
    }
    cout << endl;
    return 0;
}