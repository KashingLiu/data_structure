#include <iostream>
#include "myVector.h"

using namespace std;
int main() {
    Vector<int> a(12,12,0);
    for (int i = 0; i < 12; ++i) {
        a[i] = i+1;
    }
    a.print();
    a.insert(2, 5);
    a.print();
    a.remove(2,4);
    a.print();
    return 0;
}