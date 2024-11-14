#include <iostream>
#include <cstdlib>


using namespace std;
int main()
{
	int liczba;
	cin>>liczba;
	if(liczba <= 0)
	{
		cout<<"Podano liczbe niedodatnia. Program konczy dzialanie." << endl;
		return EXIT_FAILURE;
	}
	cout<<"Wczytano liczbe: " << liczba << endl;
	return 0;
}
