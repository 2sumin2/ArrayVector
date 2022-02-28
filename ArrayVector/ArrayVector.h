#pragma once

typedef int Elem;
class ArrayVector {
public:
	ArrayVector();
	int size() const;
	bool empty() const;
	Elem& operator[](int i);
	void at(int i);
	void set(int i, const Elem& e);
	void erase(int i);
	void insert(int i, const Elem& e);
	void reserve(int N);
private:
	int capacity;
	int n;
	Elem* A;
};
