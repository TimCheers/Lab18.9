#pragma once
#include <iostream>
using namespace std;
class error
{
public:
	virtual void what() {};
};
class IndexEr :public error
{
protected:
	string msg;
public:
	IndexEr() { msg = "Index Error!\n"; }
	virtual void what() { cout << msg; }
};
class SizeEr :public error
{
protected:
	string msg;
public:
	SizeEr() { msg = "Size Error!\n"; }
	virtual void what() { cout << msg; }
};