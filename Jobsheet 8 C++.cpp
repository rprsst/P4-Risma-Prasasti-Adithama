#include <iostream>

using namespace std;

int main()
{
	cout << "Nama: Risma Prasasti Adithama" << endl;
	cout << "NIM : F1B019124" << endl;
	cout << "Kelompok: 25" << endl;
	cout << endl;

	int x[5], y;
	for (y = 0; y < 5; y++)
	{
		cout << "Nilai index " << y << " = ";
		cin >> x[y]; 
	}
	
	cout << endl;
	cout << "Jadi, x[5] = {" << x[0] << ", " << x[1] << ", " << x[2] << ", " << x[3] << ", " << x[4] << "}";
		
	return 0;
}
