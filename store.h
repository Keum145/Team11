#pragma once
#include "fruit.h"
class store {
public:
	store() {};
	void operator *= (int);
	store(int a, int b, int c, float d, float e, float f) {
		apple = fruit(a, d);
		pear = fruit(a, d);
		peach = fruit(a, d);
	}
	fruit apple, pear, peach;
	float total();
};

void store::operator *=(int n) { apple.many *= n; 
pear.many *= n; peach.many *= n;
}

float store::total() {
	float x = apple.show();
	x += pear.show();
	x += peach.show();
	return x;
}
