#include <iostream>

using namespace std;

int main()
{
	int n, sum = 1;
	cin >> n;
	if (n <= 0) {cout << "Ошибка" << endl; return 0;}
	for (int i = 0; i <= n; i++) sum *= i;
	cout << sum << endl;

	return 0;
}