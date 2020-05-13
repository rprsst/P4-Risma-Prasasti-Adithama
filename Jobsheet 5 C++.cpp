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
	
	cout << "Matriks NIM 2:" << endl;
	for (x = 0; x < 2; x++)
	{
		for (y = 0; y < 2; y++)
		{
			cout << "  [" << x << "][" << y << "] = ";
			cin >> Matriks_NIM2[x][y];
		}
	}
	cout << endl;
	
	cout << "Hasil Perkalian kedua Matriks: " << endl;
	for (x = 0; x < 2; x++)
	{
		for (y = 0; y < 2; y++)
		{
			Matriks_Hasil[x][y] = Matriks_NIM1[x][0] * Matriks_NIM2 [0][y] + Matriks_NIM1[x][1] * Matriks_NIM2 [1][y];
			cout << "  [" << x << "][" << y << "] = " << Matriks_Hasil[x][y] << endl;
		}
	}
	
	
	
	return 0;
}
