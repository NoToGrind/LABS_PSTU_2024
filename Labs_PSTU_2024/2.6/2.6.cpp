#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n <= 2 ) { cout << "Ошибка" << endl; return 0; }
	else 
	{
		for (int i = n - 1; i >= 0; i--)
		{
			for (int j = 1; j < n - i; j++) { cout << " "; }
			for (int j = 0; j <= i; j++) { cout << "*"; }
			cout << endl;
		}
	}

	return 0;
}