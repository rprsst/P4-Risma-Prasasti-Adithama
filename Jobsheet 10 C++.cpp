#include <iostream>

using namespace std;

int main()
{
	cout << "Nama: Risma Prasasti Adithama" << endl;
	cout << "NIM : F1B019124" << endl;
	cout << "Kelompok: 25" << endl;
	cout << endl;

	int NIM_1[3];
	int NIM_2[3];
	int NIM_3[3];
	int Matriks[3][3];
	int x, y;
	
	cout << "  NIM 1:" << endl;
	for (x = 0; x < 3; x++)
	{
		cout << "Nilai " << x << ": ";
		cin >> NIM_1[x];
	}
	cout << endl;
	
	cout << "  NIM 2:" << endl;
	for (x = 0; x < 3; x++)
	{
		cout << "Nilai " << x << ": ";
		cin >> NIM_2[x];
	}
	cout << endl;
	
	cout << "  NIM 3:" << endl;
	for (x = 0; x < 3; x++)
	{
		cout << "Nilai " << x << ": ";
		cin >> NIM_3[x];
	}
	cout << endl;
	
	cout << "[0][0] = " << NIM_1[0] << endl;
	cout << "[0][1] = " << NIM_1[1] << endl;
	cout << "[0][2] = " << NIM_1[2] << endl;
	cout << "[1][0] = " << NIM_2[0] << endl;
	cout << "[1][1] = " << NIM_2[1] << endl;
	cout << "[1][2] = " << NIM_2[2] << endl;
	cout << "[2][0] = " << NIM_3[0] << endl;
	cout << "[2][1] = " << NIM_3[1] << endl;
	cout << "[2][2] = " << NIM_3[2] << endl;

	return 0;
}
