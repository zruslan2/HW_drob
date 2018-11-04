#pragma once
#include <iostream>
using namespace std;

class drob
{
	int x, y;
public:
	drob(int x = 0, int y = 1);
	void print() const;
	void setX(int x);
	void setY(int y);
	int getX() const { return x; }
	int getY() const { return y; }
	// home work
	drob operator+=(const drob &d);
	drob operator-=(const drob &d);
	drob operator*=(const drob &d);
	drob operator/=(const drob &d);
	//---------------
	double getDrob() const {
		return (double)x / y;
	}
};
// home work
drob operator+(const drob&a, const drob&b);
drob operator-(const drob&a, const drob&b);
drob operator*(const drob&a, const drob&b);
drob operator/(const drob&a, const drob&b);

bool operator<(const drob&a, const drob&b);
bool operator<=(const drob&a, const drob&b);
bool operator>(const drob&a, const drob&b);
bool operator>=(const drob&a, const drob&b);
bool operator==(const drob&a, const drob&b);
bool operator!=(const drob&a, const drob&b);
//------------