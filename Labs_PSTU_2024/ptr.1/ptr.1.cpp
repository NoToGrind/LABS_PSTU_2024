#include <iostream>
using namespace std;
int main()
{
	int a=10,b=20,k;
	int *ptr_a=&a;
	int *ptr_b=&b;
	
	k = *ptr_a;
	*ptr_a = *ptr_b;
	*ptr_b = k;

	cout << a <<" "<<b << endl;

	return 0;
}