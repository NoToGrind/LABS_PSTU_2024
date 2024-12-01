//получается не совсем кубик
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,d=0;
	cin >> n;
	d=n/2;
	//ЗАДНИЕ ГРАНИ
	for (int i=0;i<d;i++) cout << " ";
	for (int i=d;i<=n;i++) {cout << "* ";}
	cout << endl;
	//ВЕРХНИЕ ДИАГОНАЛИ
	for (int i = 0; i < d-1; i++)
		{
		for (int j = 1; j < d-i; j++) {cout << " ";}
		cout << "* ";
		for (int j = 0; j < n-2; j++) {cout << " ";}
		cout << "*";
		for (int j = 0; j < i; j++) {cout << " ";}
		cout << "*" << endl;
		}
	//PEREDНЯЯ ЛЕВАЯ ГРАНЬ + КУСОК ЗАДНЕЙ
	for (int i = 0; i <=d; i++) {cout << "* ";}
	for (int i = 0; i < d-2; i++) {cout << " ";}
	cout << "*" << endl;
	//бОКОВЫЕ ГРАНИ
	for (int i = 0; i < n-d-1; i++)
	{
		cout << "* ";
		for (int j = 0; j < n-2; j++) {cout << " ";}
		cout << "* ";
		for (int i = 0; i < d-2; i++) {cout << " ";}
		cout << "*" << endl;
	}
	//НИЖНИЕ ДИАГОНАЛИ
	for (int i = 0; i < d-1; i++)
	{
		cout << "* ";
		for (int j = 0; j < n-2; j++) {cout << " ";}
		cout << "*";
		for (int j = 1; j < d-i-1; j++) {cout << " ";}
 		cout << "*" << endl;
	}
	
	for (int i = 0; i <=d; i++) {cout << "* ";}
	cout << endl;
		

	return 0;
}