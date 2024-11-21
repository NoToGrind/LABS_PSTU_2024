#include <iostream>

using namespace std;

int main()
{
	int n, k, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		k = 1;
		for (int j = i; j <= 2 * i; j++) k *= j;
		sum += k;
	}
	cout << sum << endl;

	return 0;
}