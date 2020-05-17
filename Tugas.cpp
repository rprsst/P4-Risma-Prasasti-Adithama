#include <iostream>

using namespace std;

int main(){
	
	cout << endl;
	cout << "  Nama    : Risma Prasasti Adithama" << endl;
	cout << "  NIM     : F1B019124" << endl;
	cout << "  Kelompok: 25" << endl << endl << endl;
	
	cout << "			1 0   P E R T A N Y A A N   T E N T A N G   C O V I D - 1 9" << endl;
	cout << "			```````````````````````````````````````````````````````````" << endl << endl << endl;
	
	int rslts = 0;
	char answr;
	string qstn1[5] = {"a. Wabah", "b. Pandemi", "c. Epidemi", "d. Endemik", "e. Klaster"};
	string qstn2[5] = {"a. HIV", "b. MERS", "c. SARS", "d. Ebola", "e. SARS-CoV-2"};
	string qstn3[5] = {"a. Huangshi", "b. Xiangyang", "c. Wuhan", "d. Jingzhou", "e. Shiyan"};
	string qstn4[5] = {"a. 16 Maret 2020", "b. 16 April  2020", "c. 28 Februari 2020", "d. 2 Maret 2020", "e. 23 Februari 2020 "};
	string qstn5[5] = {"a. Batuk kering", "b. Sesak nafas", "c. Demam di atas 48 derajat celcius", "d. Mual-mual", "e. Kehilangan indra penciuman"};
	string qstn6[5] = {"a. Rutin mencuci tangan", "b. Menjaga jarak dengan orang lain", "c. Gunakan masker jika keluar rumah", "d. Jangan menyentuh wajah", "e. Semua benar"};
	string qstn7[5] = {"a. 10 - 19 Tahun", "b. 20 - 29 Tahun", "c. 30 - 39 Tahun", "d. 40 - 59 Tahun", "e. 60+ Tahun"};
	string qstn8[5] = {"a. 20 Detik", "b. 15 Detik", "c. 10 Detik", "d. 5 Detik", "e. 1 Detik"};
	string qstn9[5] = {"a. Dokter & perawat", "b. TNI & POLRI", "c. Pegawai PLN & Kasir minimarket", "d. Tukang Ojek dan Pelaku UKM", "e. Semua benar"};
	string qstn10[5] = {"a. Menjaga kesehatan dan daya tahan tubuh", "b. Menolak jenazah pasien COVID-19", "c. Hanya keluar rumah jika perlu", "d. Tidak menimbun bahan makanan atau APD", "e. Memeriksa kebenaran berita terkait COVID-19 sebelum membagikannya"};
	
	//	1	
	qstn1 :
	cout << " 1. 'Penyakit yang menyebar luas di seluruh wilayah dunia secara bersamaan' merupakan pengertian dari ..." << endl;
	for (int x = 0; x <5; x++)
	{
		cout << "	" << qstn1[x] << endl;
	}
	cout << "						[Jawab]: ";
	cin >> answr;
	cout << endl << endl;
	if (answr == 'b')
	{
		rslts += 10;
	}
	else if (answr >= 'f' || answr >= '0' && answr <= '9')
	{
		cout << "	Pilihan tidak ditemukan!" << endl << endl;
		goto qstn1;
	}
	
	//	2	
	qstn2 :
	cout << " 2. COVID-19 merupakan nama penyakit yang disebabkan oleh virus yang termasuk keluarga Coronavirus yaitu ..." << endl;
	for (int x = 0; x <5; x++)
	{
		cout << "	" << qstn2[x] << endl;
	}
	cout << "						[Jawab]: ";
	cin >> answr;
	cout << endl << endl;
	if (answr == 'e')
	{
		rslts += 10;
	}
	else if (answr >= 'f' || answr >= '0' && answr <= '9')
	{
		cout << "	Pilihan tidak ditemukan!" << endl << endl;
		goto qstn2;
	}
	
	//	3	
	qstn3 :
	cout << " 3. Kota dari Provinsi Hubei di China yang merupakan tempat kasus pertama dan kemudian menjadi episenter penyebaran COVID-19 adalah ..." << endl;
	for (int x = 0; x <5; x++)
	{
		cout << "	" << qstn3[x] << endl;
	}
	cout << "						[Jawab]: ";
	cin >> answr;
	cout << endl << endl;
	if (answr == 'c')
	{
		rslts += 10;
	}
	else if (answr >= 'f' || answr >= '0' && answr <= '9')
	{
		cout << "	Pilihan tidak ditemukan!" << endl << endl;
		goto qstn3;
	}
	
	//	4	
	qstn4 :
	cout << " 4. Kasus COVID-19 yang pertama kali terdeteksi di Indonesia terjadi pada tanggal ..." << endl;
	for (int x = 0; x <5; x++)
	{
		cout << "	" << qstn4[x] << endl;
	}
	cout << "						[Jawab]: ";
	cin >> answr;
	cout << endl << endl;
	if (answr == 'd')
	{
		rslts += 10;
	}
	else if (answr >= 'f' || answr >= '0' && answr <= '9')
	{
		cout << "	Pilihan tidak ditemukan!" << endl << endl;
		goto qstn4;
	}
	
	//	5	
	qstn5 :
	cout << " 5. Di bawah ini yang tidak termasuk gejala umum COVID-19 adalah ..." << endl;
	for (int x = 0; x <5; x++)
	{
		cout << "	" << qstn5[x] << endl;
	}
	cout << "						[Jawab]: ";
	cin >> answr;
	cout << endl << endl;
	if (answr == 'd')
	{
		rslts += 10;
	}
	else if (answr >= 'f' || answr >= '0' && answr <= '9')
	{
		cout << "	Pilihan tidak ditemukan!" << endl << endl;
		goto qstn5;
	}
	
	//	6	
	qstn6 :
	cout << " 6. Tindakan pencegahan infeksi COVID-19 yang benar ialah ..." << endl;
	for (int x = 0; x <5; x++)
	{
		cout << "	" << qstn6[x] << endl;
	}
	cout << "						[Jawab]: ";
	cin >> answr;
	cout << endl << endl;
	if (answr == 'e')
	{
		rslts += 10;
	}
	else if (answr >= 'f' || answr >= '0' && answr <= '9')
	{
		cout << "	Pilihan tidak ditemukan!" << endl << endl;
		goto qstn6;
	}
	
	//	7	
	qstn7 :
	cout << " 7. Dari daftar jajaran usia di bawah, manakah yang paling rentan untuk tertualar COVID-19?" << endl;
	for (int x = 0; x <5; x++)
	{
		cout << "	" << qstn7[x] << endl;
	}
	cout << "						[Jawab]: ";
	cin >> answr;
	cout << endl << endl;
	if (answr == 'e')
	{
		rslts += 10;
	}
	else if (answr >= 'f' || answr >= '0' && answr <= '9')
	{
		cout << "	Pilihan tidak ditemukan!" << endl << endl;
		goto qstn7;
	}
	
	//	8	
	qstn8 :
	cout << " 8. Sesuai himbauan WHO, durasi minimal pencucian tangan yang  benar untuk menghilangakan virus yang menempel di tangan adalah ..." << endl;
	for (int x = 0; x <5; x++)
	{
		cout << "	" << qstn8[x] << endl;
	}
	cout << "						[Jawab]: ";
	cin >> answr;
	cout << endl << endl;
	if (answr == 'a')
	{
		rslts += 10;
	}
	else if (answr >= 'f' || answr >= '0' && answr <= '9')
	{
		cout << "	Pilihan tidak ditemukan!" << endl << endl;
		goto qstn8;
	}
	
	//	9	 

	qstn9 :
	cout << " 9. Orang yang termasuk pejuang garda depan terkait pandemi COVID-19 di Indonesia, khususnya bekerja sebagai ..." << endl;
	for (int x = 0; x <5; x++)
	{
		cout << "	" << qstn9[x] << endl;
	}
	cout << "						[Jawab]: ";
	cin >> answr;
	cout << endl << endl;
	if (answr == 'e')
	{
		rslts += 10;
	}
	else if (answr >= 'f' || answr >= '0' && answr <= '9')
	{
		cout << "	Pilihan tidak ditemukan!" << endl << endl;
		goto qstn9;
	}
	
	//	10	
	qstn10 :
	cout << " 10. Langkah bijaksana yang bisa kita lakukan untuk menyikapi krisis COVID-19 ini ialah sebagai berikut, kecuali ..." << endl;
	for (int x = 0; x <5; x++)
	{
		cout << "	" << qstn10[x] << endl;
	}
	cout << "						[Jawab]: ";
	cin >> answr;
	cout << endl << endl;
	if (answr == 'b')
	{
		rslts += 10;
	}
	else if (answr >= 'f' || answr >= '0' && answr <= '9')
	{
		cout << "	Pilihan tidak ditemukan!" << endl << endl;
		goto qstn10;
	}
	
	cout << endl;
	cout << "	Nilai anda adalah " << rslts << endl << endl << endl << endl;
	
	cout << "					T E R I M A   K A S I H" << endl;
	cout << "					```````````````````````" << endl;
	
	return 0;
}
