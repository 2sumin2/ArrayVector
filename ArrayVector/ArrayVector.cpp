#include "ArrayVector.h"
#include <iostream>
using namespace std;

ArrayVector::ArrayVector()
	: capacity(0), n(0), A(NULL) { }

int ArrayVector::size() const
{
	return n;
}
bool ArrayVector::empty() const
{
	return size() == 0;
}
Elem& ArrayVector::operator[](int i)
{
	return A[i];
}
void ArrayVector::at(int i) {
	if (i < 0 || i >= n) 
		cout << "illegal index in function at()" << endl;
	else
		cout << A[i] << endl;
}
void ArrayVector::set(int i, const Elem& e) {
	A[i] = e;
}
void ArrayVector::erase(int i) {
	for (int j = i + 1; j < n; j++)
		A[j - 1] = A[j];
	n--;
}
void ArrayVector::reserve(int N) {
	if (capacity >= N) return;
	Elem* B = new Elem[N];
	for (int j = 0; j < n; j++)
		B[j] = A[j];
	if (A != NULL) delete[] A;
	A = B;
	capacity = N;
}
void ArrayVector::insert(int i, const Elem& e) {
	if (n >= capacity)
		reserve(max(1, 2 * capacity));
	for (int j = n - 1; j >= i; j--)
		A[j + 1] = A[j];
	A[i] = e;
	n++;
}