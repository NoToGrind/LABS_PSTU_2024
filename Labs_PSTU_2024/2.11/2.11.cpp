#include <iostream>
using namespace std;
int main()
{
	int n,k;
	cin >> n;
	bool minus = false;
	bool plus = false;

	for(int i=1;i<=n;i++)
	{
		cin >> k;
		if (!minus && !plus)
		{
			if(k>0){plus=true;}
			else if(k<0){minus=true;}
		}
	}

	if(plus){cout<<"Положительные число";}
	else if(minus){cout << "Отрицательное число";}
	else {cout << "Числа нулевые";}

	return 0;
}