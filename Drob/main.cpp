#include "drob.h"

void main() {
	drob a(3, 2);
	drob b(1, 2);
	drob c;
	//c = a * b;
	a.print();
	cout << endl;
	b.print();
	cout << endl;
	if (a < b)cout << "a>b";
	else cout << "a!=b";	
	//c.print();
	cout << endl;
	system("pause");
}