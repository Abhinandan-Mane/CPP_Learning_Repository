#include <iostream>
using namespace std;
#include <limits>;

int main() {
    int age {12};
    cout << age << endl;
    cout << numeric_limits<int>::max();
    return 0;
}