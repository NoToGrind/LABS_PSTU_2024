#include <iostream>
using namespace std;
int main()
{
	int a,b,k;
	cin >> a >> b;
	int *ptr_a=&a;
	int *ptr_b=&b;
	
	k = *ptr_a + *ptr_b;

	cout << k << endl;

	return 0;
}