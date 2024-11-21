#include <iostream>

using namespace std;

int main()
{
	int n, sum = 1;
	cin >> n;
	if (n <= 0) cout << "Нельзя посчитать сумму" << endl;
	for (int i = 1; i <= n; i++) sum *= i;
	cout << sum << endl;

	return 0;
}