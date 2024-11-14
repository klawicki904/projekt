#include <iostream>
using namespace std;

bool czy_pierwsza(int n)
{
	if(n <= 1) return false;
	for(int i = 2; i * i <= n; ++i)
	{
		if(n%i == 0) return false;
	}
	return true;
}

int main()
{
	int liczba;
	cin>>liczba;
	cout<<"Wczytano liczbe: " << liczba << endl;
	cout<< "Czy liczba jest pierwsza: " << (czy_pierwsza(liczba) ? "tak" : "nie") << endl;
	return 0;
}

