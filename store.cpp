#include <iostream>
#include "store.h"

using namespace std;

float store::total() {
    float x = apple.show();
    x += pear.show();
    x += peach.show();
    x += mango.show();
    return x;
}