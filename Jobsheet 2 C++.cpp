#include <iostream>

using namespace std;

int main()
{
	cout << "Nama: Risma Prasasti Adithama" << endl;
	cout << "NIM : F1B019124" << endl;
	cout << "Kelompok: 25" << endl;
	cout << endl;
	
	string NIM[5];
	
	cout << "	Masukkan NIM Anggota Kelompok 25" << endl;
	cout << " Rio Syarifuddin : ";
	cin >> NIM[0];
	cout << " Risma Prasasti Adithama : ";
	cin >> NIM[1];
	cout << " Riyan Fathurrahman : ";
	cin >> NIM[2];
	cout << " Rohul Iman : ";
	cin >> NIM[3];
	cout << " Zahratul Laily : ";
	cin >> NIM[4];
	cout << endl;
	
	cout << "	Daftar NIM Anggita Kelompok 25";
	cout << NIM[0] << " : Rio Syarifuddin" << endl;
	cout << NIM[1] << " : Risma Prasasti Adithama" << endl;
	cout << NIM[2] << " : Riyan Fathurrahman" << endl;
	cout << NIM[3] << " : Rohul Iman" << endl;
	cout << NIM[4] << " : Zahratul laily" << endl;

	
	return 0;
}
