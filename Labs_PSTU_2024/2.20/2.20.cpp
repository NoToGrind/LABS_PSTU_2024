#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x,n,S;
	double a;
	bool flag = false;
	cin >> n >> S;

	for (int i = 1; i <= n; i++)
	{
		x=n+(i/n);
		a=sin(x);
		if (a==S){cout << "Элемент равен S"<< endl; i+=n; flag = true;}
	}
	if (!flag) {cout << "Элемент не найден" << endl;}

	return 0;
}