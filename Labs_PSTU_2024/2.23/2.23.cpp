#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int num=0;
	float x,max=-1,n;
	double a;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		x=n+(i/n);
		a=sin(x);
		if (max < a){max = a;}
	}
	for (int i = 1; i <= n; i++)
	{
		x=n+(i/n);
		a=sin(x);
		if (a == max) {num++;}
	}
    num--;  // будет выводить хотя бы 1, потому что у меня сравнится a и max при одинаковом i, что как будто совпадение, поэтому вычитаем после сравнения совпадение максимального с самим собой
	cout << num << endl;

	return 0;
}