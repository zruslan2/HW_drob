#include "drob.h"

drob::drob(int x, int y)
{
	this->x = x;
	setY(y);
}

void drob::print() const
{
	cout << x << " / " << y << " = " << (double)x / y;
}

void drob::setX(int x)
{
	this->x = x;
}

void drob::setY(int y)
{
	if (y != 0)
		this->y = y;
	else
		this->y = 1;
}

drob drob::operator+=(const drob &d)
{
	this->x = this->x*d.y + this->y*d.x;
	this->y = d.y*this->y;
	return *this;
}

drob drob::operator-=(const drob & d)
{
	this->x = this->x*d.y - this->y*d.x;
	this->y = d.y*this->y;
	return *this;
}

drob drob::operator*=(const drob & d)
{
	this->x = this->x*d.x;
	this->y = this->y*d.y;
	return *this;
}

drob drob::operator/=(const drob & d)
{
	this->x = this->x*d.y;
	this->y = this->y*d.x;
	return *this;
}

drob operator+(const drob & a, const drob & b)
{
	drob res(a.getX(), a.getY());
	res += b;
	return res;
}

drob operator-(const drob & a, const drob & b)
{
	drob res(a.getX(), a.getY());
	res -= b;
	return res;
}

drob operator*(const drob & a, const drob & b)
{
	drob res(a.getX(), a.getY());
	res *= b;
	return res;
}

drob operator/(const drob & a, const drob & b)
{
	drob res(a.getX(), a.getY());
	res /= b;
	return res;
}

bool operator<(const drob & a, const drob & b)
{
	return a.getDrob()<b.getDrob();
}

bool operator<=(const drob & a, const drob & b)
{
	return a.getDrob()<=b.getDrob();
}

bool operator>(const drob & a, const drob & b)
{
	return a.getDrob() > b.getDrob();
}

bool operator>=(const drob & a, const drob & b)
{
	return a.getDrob() >= b.getDrob();
}

bool operator==(const drob & a, const drob & b)
{
	return a.getDrob() == b.getDrob();
}

bool operator!=(const drob & a, const drob & b)
{
	return a.getDrob() != b.getDrob();
}

