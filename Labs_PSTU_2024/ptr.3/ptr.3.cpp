#include <iostream>
using namespace std;
int main()
{
	float a,b,k;
	cin >> a >> b;
	float *ptr_a=&a;
	float *ptr_b=&b;
	
	k = *ptr_a + *ptr_b;

	cout << k << endl;

	return 0;
}