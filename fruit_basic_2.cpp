#include <iostream>
#include <fstream>
#include "store.h"

using namespace std;
void store::operator*=(int b) {
    apple.many *= b;
    pear.many *= b;
    peach.many *= b;
    mango.many *= b;
}

float store::total() {
    float x = apple.show();
    x += pear.show();
    x += peach.show();
    return x;
}

int main(void)
{
    store A, B, C;
    B = store(3, 4, 5, 6, 100, 200, 300, 400);
    A = store(2, 3, 4, 5, 100, 150, 200, 250);
    A *= 2;

    cout << A.apple.many << endl;
    return 0;
}