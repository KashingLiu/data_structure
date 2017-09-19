#include <iostream>
#include "myVector.h"

using namespace std;
int main() {
    Vector<int> a(12,12,0);
    int b[3] = {1,2,3};
    a.insert(2, b[2]);
    cout << a[2] << endl;
    cout << a[3] << endl;
    cout << a[4] << endl;
    return 0;
}