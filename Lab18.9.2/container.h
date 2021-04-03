#pragma once
#include <iostream>
using namespace std;
class container
{
public:
	container() { size = 0; data = nullptr; }
	container(int size);
	container(const container& obj);
	~container();
	container& operator = (const container& obj);
	int& operator [] (const int index);
	friend ostream& operator <<(ostream& out, const container& other);
	friend istream& operator >>(istream& out, const container& other);
	bool operator != (const container& obj);
	bool operator < (const int value);
	int operator +(int n);
private:
	int size;
	int* data;
};
