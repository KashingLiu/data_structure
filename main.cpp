#include <iostream>
#include "myVector.h"

using namespace std;
int main() {
    Vector<int> a(12);
    a.insert(2, 12);
    cout << a[2] << endl;
    return 0;
}