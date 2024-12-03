#include <iostream>
using namespace std;
int main()
{
	int n,S,k;
	bool flag = false;

	cin >> n >> S;
	while(n>0 && !flag)
	{
		k=n%10;
		if (k==S){flag = true;cout<<"Цифра S входит в N";}
		else {n=n/10;}
	}
	if (!flag){cout << "Цифры S нет в N";}

	return 0;
}