#include "ArrayVector.h"
#include <stdio.h>
#include <iostream>

using namespace std;

int main(void) {
	ArrayVector* a = new ArrayVector();

	a->insert(0, 7);
	a->insert(0, 4);

	a->at(1);

	a->insert(2, 2);

	a->at(3);

	a->erase(1);

	a->insert(1, 5);
	a->insert(1, 3);
	a->insert(4, 9);

	a->at(2);

	a->at(3);
	
	a->set(3, 8);

	a->at(3);

}