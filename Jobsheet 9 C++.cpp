#include <iostream>

using namespace std;

int main()
{
	cout << "Nama: Risma Prasasti Adithama" << endl;
	cout << "NIM : F1B019124" << endl;
	cout << "Kelompok: 25" << endl;
	cout << endl;

	char Nama[23] = {'R', 'i', 's', 'm', 'a', ' ', 'P', 'r', 'a', 's', 'a', 's', 't', 'i', ' ', 'A', 'd', 'i', 't', 'h', 'a', 'm', 'a'};

	cout << "Nama: ";
	for(int x = 0; x < 24; x++)
	{
		cout << Nama[x];
	}
	
	return 0;
}
