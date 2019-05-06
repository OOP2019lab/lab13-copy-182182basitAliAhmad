#pragma once
#include<iostream>
using namespace std;

template<typename T>
class Pair
{
	T values[2];

public:
	Pair(T x, T y)
	{
		this->values[0] = x;
		this->values[1] = y;
	}

	T getMax() const
	{
		return this->values[0] > this->values[1] ? this->values[0] : this->values[1];
	}

	T getMin() const;

	friend ostream& operator << (ostream& out, const Pair& d)
	{
		out << d.values[0] << ' ' << d.values[1];

		return out;
	}
};

//template class Pair<double>;

template<typename T>
T Pair<T>::getMin() const
{
	return values[0] < values[1] ? values[0] : values[1];
}
