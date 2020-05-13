#include <iostream>

using namespace std;

int main()
{
	cout << "Nama: Risma Prasasti Adithama" << endl;
	cout << "NIM : F1B019124" << endl;
	cout << "Kelompok: 25" << endl;
	cout << endl;

	int Matriks_NIM1[2][2];
	int Matriks_NIM2[2][2];
	int Matriks_Hasil[2][2];
	int x, y;
	
	cout << "Matriks NIM 1:" << endl;
	for (x = 0; x < 2; x++)
	{
		for (y = 0; y < 2; y++)
		{
			cout << "  [" << x << "][" << y << "] = ";
			cin >> Matriks_NIM1[x][y];
		}
	}
	cout << endl;
	
	cout << "Hasil Transpose Matriks NIM 1: " << endl;
	for (x = 0; x < 2; x++)
	{
		for (y = 0; y < 2; y++)
		{
			cout << "  [" << y << "][" << x << "] = " << Matriks_NIM1[y][x] << endl;
		}
	}
	
	
	
	return 0;
}
