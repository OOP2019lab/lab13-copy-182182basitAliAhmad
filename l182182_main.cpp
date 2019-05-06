#include "l182182_Pair.h"

template<typename T>
T getMax(T x, T y)
{
	return x > y ? x : y;
}

template<typename T>
T getMin(T x, T y)
{
	return x < y ? x : y;
}

template<typename T1, typename T2>
T1 getMax(T1 x, T2 y)
{
	return x > y ? x : y;
}

template<typename T1, typename T2>
T1 getMin(T1 x, T2 y)
{
	return x < y ? x : y;
}

int main()
{
	//// Task 1
	//int i = 5, j = 6, k;
	//long l = 10, m = 5, n;
	//k = getMax<int>(i, j);
	//n = getMin<long>(l, m);
	//cout << k << endl;
	//cout << n << endl;

	//// Task 2
	//int i = 5, j = 6, k;
	//long l = 10, m = 5, n;
	//k = getMax(i, j);
	//n = getMin(l, m);
	//cout << k << endl;
	//cout << n << endl;

	// Task 3
	
	/*char i = 'Z';
	int  j = 6, k;
	long l = 10, m = 5, n;
	k = getMax<int, long>(i, m);
	n = getMin<int, char>(j, l);
	cout << k << endl;
	cout << n << endl;*/

	// Task 4
	/*char i = 'Z';
	int  j = 6, k;
	long l = 10, m = 5, n;
	k = getMax(i, m);
	n = getMin(j, l);
	cout << k << endl;
	cout << n << endl;*/


	// Task 5
	Pair<double> myobject(1.012, 1.01234);
	cout << myobject.getMax() << endl;
	cout << myobject.getMin() << endl;
	cout << myobject << endl; // << operator in pairs should be overloaded (inline)


		
	

	
	return 0;
}
