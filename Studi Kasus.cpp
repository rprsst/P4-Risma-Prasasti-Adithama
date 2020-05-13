#include <iostream>
#include <string>

using namespace std;

void opening()
{
	cout << endl;
	cout << "									D  A  N  A" << endl;
	cout << "									``````````" << endl;
	cout << endl;
	cout << "	MASUK" << endl;
	cout << "	`````" << endl;
	cout << endl;
}

void end()
{
	cout << "		Maaf sesi anda telah berakhir," << endl;
	cout << "		   zsilakan coba lagi nanti." << endl;
	cout << endl;
	cout << "			Terima kasih" << endl;
}

void password()
{
	string username, password;	
	char YT;
	int attempt = 3;
	
	do
	{
	cout << "  Username  : ";
	cin >> username;
	cout << "  Kata sandi: ";
	cin >> password;

	if (username == "Risma" && password == "F1B019124")
	{
		cout << "  Status    : Berhasil" << endl;
		cout << endl;
		system("pause");
		system("cls");
		goto Z2;
	}
	if (username != "Risma")
	{
		cout << "  Status    : Gagal" << endl;
		cout << endl;
		cout << "		Maaf username tidak terdaftar!" << endl;
		tryagain :
		cout << endl;
		cout << "			  Coba lagi?" << endl;
		cout << "			   [Y/T]: ";
		cin >> YT;
		if (YT == 'T' || YT == 't')
		{
			goto Z;
		}
		else if (YT == 'Y' || YT == 'y')
		{
			system("cls");
			opening();
		}
		else
		{
			system ("cls");
			cout << endl;
			cout << "									D  A  N  A" << endl;
			cout << "									``````````" << endl;
			cout << endl;
			cout << "	MASUK" << endl;
			cout << "	`````" << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << "		        Masukan salah!" << endl;
			cout << endl;
			goto tryagain;
		}
	}
	if (username == "Risma" && password != "F1B019124")
	{
		cout << "  Status    : Gagal" << endl;
		cout << endl;
		cout << "		Maaf kata sandi anda salah!" << endl;
		cout << endl;
		tryagain2 :
		cout << "			Coba lagi?" << endl;
		cout << "			 [Y/T]: ";
		cin >> YT;
		if (YT == 'T' || YT == 't')
		{
			goto Z;
		}
		else if (YT == 'Y' || YT == 'y')
		{
			system("cls");
			opening();
		}
		else 
		{
			system ("cls");
			cout << endl;
			cout << "									D  A  N  A" << endl;
			cout << "									``````````" << endl;
			cout << endl;
			cout << "	MASUK" << endl;
			cout << "	`````" << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << "		       Masukan salah!" << endl;
			cout << endl;
			goto tryagain2;
		}
	}
	attempt--;
	}
	while (attempt > 0);
	cout << endl;
	end();
	Z :
	exit(0);
	Z2 :;
}

int present, past, future;
string name;

void side()
{
	present = past;
	cout << "														Saldo: Rp " << present << endl;
}

void side0()
{
	past = 640000;
}

void main_menu()
{
	int menu;
	string MENU[4] = {"Isi Saldo", "Kirim", "Minta", "Listrik"};
	
	side0();
	A :
	cout << endl;
	cout << "									D  A  N  A" << endl;
	cout << "									``````````" << endl;
	cout << "========================================================================================================================================================================";
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "				Selamat Datang, Risma!" << endl;
	side();
	B :
	cout << endl;
	cout << "	MENU" << endl;
	cout <<"	````" << endl;
	cout << endl;
	for (int x = 1; x < 5; x++)
	{
		cout << "  " << x << ". " << MENU[x-1] << endl;
	}
	cout << endl;
	cout << "  Pilih menu: ";
	cin >> menu;
	switch (menu)
	{
		case (1) :
			{
				int Metode_Pembayaran;
				string Isi_Saldo;
				Isi_Saldo :
				isi_saldo :
				cout << endl;
				cout << "	ISI SALDO" << endl;
				cout << "	`````````" << endl;
				cout << endl;
				cout << "  1. Kartu Debit" << endl;
				cout << "  2. Transfer Bank" << endl;
				cout << "  3. Alfamart" << endl;
				cout << endl;
				cout << "  ";
				cin >> Metode_Pembayaran;
				switch (Metode_Pembayaran)
				{
					case (1) :
						{
							string Card_Number, Expiry_Date, CVV;
							cout << endl;
							cout << "  Nomor Kartu       : ";
							cin >> Card_Number;
							cout << "  Tanggal Kadaluarsa: ";
							cin >> Expiry_Date;
							cout << "  Kode CVV          : ";
							cin >> CVV;
							cout << endl;
							cout << "  Jumlah            : Rp ";
							cin >> future;
							cout << endl;
							cout << "		Transaksi anda sedang dalam proses." << endl;
						}
						break;
					case (2) :
						{
							int bank;
							string Pilihan_Bank;
							Pilihan_Bank :
							bank :
							cout << endl;
							cout << "  Pilih Bank: " << endl;
							cout << "	1. BCA" << endl;
							cout << "	2. BRI" << endl;
							cout << "	3. BNI" << endl;
							cout << "	4. Mandiri" << endl;
							cout << endl;
							cout << "   ";
							cin >> bank;
							switch (bank)
							{
								case (1) :
									{
										cout << "	  Nomor Akun Virtual BCA: 3091 0819 1893 9312" << endl;			
										cout << endl;
										cout << "	  Jumlah                : Rp ";
										cin >> future;
										cout << endl;
										cout << " 	         Silahkan melakukan transfer." << endl;
									}
									break;
								case (2) :
									{
										cout << "	  Nomor Akun Virtual BRI: 8881 0819 1893 9312" << endl;
										cout << endl;
										cout << "	  Jumlah                : Rp ";
										cin >> future;
										cout << endl;
										cout << "	         Silahkan melakukan transfer." << endl;
									}
									break;
								case (3) :
									{
										cout << "	  Nomor Akun Virtual BNI: 8810 0819 1893 9312" << endl;
										cout << endl;
										cout << "	  Jumlah                : Rp ";
										cin >> future;
										cout << endl;
										cout << "	         Silahkan melakukan transfer." << endl;
									}
									break;
								case (4) :
									{
										cout << "	  Nomor Akun Virtual Mandiri: 8950 0819 1893 9312" << endl;
										cout << endl;
										cout << "	  Jumlah                : Rp ";
										cin >> future;
										cout << endl;
										cout << "	         Silahkan melakukan transfer." << endl;
									}
									break;
								default :
									{
										cout << endl;
										cout << "	  	   Pilihan tidak ditemukan!" << endl;
										goto bank;
									}
							}
						}
						break;
					case (3) :
						{
							int nominal;
							cout << endl;
							cout << "	Nomor Seluler DANA: 0819 1893 9312" << endl;
							cout << endl;
							cout << "	Langkah-langkah pengisian saldo DANA via Alfamart." << endl;
							cout << "  1. Kunjungi Gerai Alfamart terdekat." << endl;
							cout << "  2. Informasikan ke kasir bahwa Anda ingin melakukakan pengisian saldo DANA." << endl;
							cout << "  3. Informasikan nomor ponsel Anda yang tertera di atas." << endl;
							cout << "  4. Informaskan jumlah saldo yang ingin anda isi kepada kasir." << endl;
							cout << "  5. Ikuti instruksi selanjutnya dari kasir" << endl;
							nominal :
							cout << endl;
							cout << "  Nominal Pengisian Saldo: " << endl;
							cout << "            1. Rp 50.000" << endl;
							cout << "            2. Rp 100.000" << endl;
							cout << "            3. Rp 200.000" << endl;
							cout << endl;
							cout << "  Pilih nominal : ";
							cin >> nominal;
							switch (nominal)
							{
								case (1) :
									{
										future = 50000;
									}
									break;
								case (2) :
									{
										future = 100000;
									}
									break;
								case (3) :
									{
										future = 200000;
									}
									break;
								default :
									{
										cout << endl;
										cout << "	  	   Pilihan tidak ditemukan!" << endl;
										goto nominal;
									}
							}
						}
						break;
					default :
						{
							cout << endl;
							cout << "	  	   Pilihan tidak ditemukan!" << endl;
							goto isi_saldo;
						}
				}
				char YT;
				offer :
				cout << endl;
				cout << "	  Apakah anda ingin melakukan transaksi lain?" << endl;
				cout << "			  [Y/T]: ";
				cin >> YT;
				if (YT == 'Y' || YT == 'y')
				{
					past = past + future;
					system("cls");
					goto A;
				}
				else if (YT == 'T' || YT == 't')
				{
					system ("cls");
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << "									TERIMA KASIH" << endl;
					cout << "									````````````" << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					goto end;
				}
				else
				{
					cout << endl;
					cout << "		       Masukan salah!" << endl;
					goto offer;
				}
				end:;
			}
			break;
		case (2) :
			{
				int Metode_Pengiriman;
				string kirim;
				kirim:
				cout << endl;
				cout << "	KIRIM" << endl;
				cout << "	`````" << endl;
				cout << endl;
				cout << "  1. Kirim ke Rekening Bank" << endl;
				cout << "  2. Kirim ke Nomor Seluler" << endl;
				cout << endl;
				cout << "  ";
				cin >> Metode_Pengiriman;
	
				switch (Metode_Pengiriman)
				{
					case (1) :
						{
							string Bank_Name, Account_Number, Alias;
							cout << endl;
							cout << "  Nama Bank     : ";
							cin >> Bank_Name;
							cout << "  Nomor Rekening: ";
							cin >> Account_Number;
							cout << "  Alias         : ";
							cin >> Alias;
							cout << endl;
							cout << "  Jumlah        : Rp ";
							cin >> future;
							future = -future;
						}
						break;
					case (2) :
						{
							int Phone_Number;
							cout << endl;
							cout << "  Nomor Ponsel: ";
							cin >> Phone_Number;
							cout << endl;
							cout << "  Jumlah      : Rp ";
							cin >> future;
							future = -future;
						}
						break;
					default :
						{
							cout << endl;
							cout << "	  	   Pilihan tidak ditemukan!" << endl;
							goto kirim;
						}
				}
				char YT;
				offer2 :
				cout << endl;
				cout << "	  Apakah anda ingin melakukan transaksi lain?" << endl;
				cout << "			  [Y/T]: ";
				cin >> YT;
				if (YT == 'Y' || YT == 'y')
				{
					past = past + future;
					system("cls");
					goto A;
				}
				else if (YT == 'T' || YT == 't')
				{
					system ("cls");
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << "									TERIMA KASIH" << endl;
					cout << "									````````````" << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					goto end2;
				}
				else
				{
					cout << endl;
					cout << "		       Masukan salah!" << endl;
					goto offer2;
				}
				end2:;
			}
			break;
		case (3) :
			{
				int sharing;
				string minta;
				cout << endl;
				cout << "	MINTA" << endl;
				cout << "	`````" << endl;
				cout << endl;
				cout << "  Jumlah    : Rp ";
				cin >> future;
				minta :
				cout << endl;
				cout << "  Bagikan ke: " << endl;
				cout << "	1. Pesan" << endl;
				cout << "	2. Gmail" << endl;
				cout << "	3. Whatsapp" << endl;
				cout << "	4. Facebook" << endl;
				cout << endl;
				cout << "	";
				cin >> sharing;
				cout << endl;
	
				switch (sharing)
				{
					case (1) :
						{
							cout << "	Permintaan anda berhasil dibagikan ke Pesan." << endl;
						}
						break;
					case (2) :
						{
							cout << "	Permintaan anda berhasil dibagikan ke Gmail." << endl;
						}			
						break;
					case (3) :
						{
							cout << "	Permintaan anda berhasil dibagikan ke Whatsapp." << endl;
						}
						break;
					case (4) :
						{
							cout << "	Permintaan anda berhasil dibagikan ke Facebook." << endl;
						}
						break;
					default :
						{			
							cout << endl;
							cout << "	  	   Pilihan tidak ditemukan!" << endl;
							goto minta;
						}
				}
				char YT;
				offer3 :
				cout << endl;
				cout << "	  Apakah anda ingin melakukan transaksi lain?" << endl;
				cout << "			  [Y/T]: ";
				cin >> YT;
				if (YT == 'Y' || YT == 'y')
				{
					past = past + future;
					system("cls");
					goto A;
				}
				else if (YT == 'T' || YT == 't')
				{
					system ("cls");
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << "									TERIMA KASIH" << endl;
					cout << "									````````````" << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					goto end3;
				}
				else
				{
					cout << endl;
					cout << "		       Masukan salah!" << endl;
					goto offer3;
				}
				end3:;
			}
			break;
		case (4) :
			{
				int Pra_Pasca, ID, nominal, harga1 = 21500, harga2 = 51500, harga3 = 101500;
				float bulan, total;
				string listrik, voucher;
				listrik :
				cout << endl;
				cout << "	LISTRIK" << endl;
				cout << "	```````" << endl;
				cout << "	     ______________________________________________" << endl;
				cout << "	   ~/                                             /~" << endl;
				cout << "	  ~/ Diskon 20% untuk Pembayaran Tagihan Listrik /~" << endl;
				cout << "	 ~/          Kode Voucher: 'H E M A T'          /~" << endl;
				cout << "	~/_____________________________________________/~" << endl;
				cout << endl;
				cout << "  1. Prabayar" << endl;
				cout << "  2. Pascabayar" << endl;
				cout << endl;
				cout << "  ";
				cin >> Pra_Pasca;
				cout << endl;
				
				switch (Pra_Pasca)
				{
					case (1) :
						{
							cout << "  ID Pelanggan  : ";
							cin >> ID;
							cout << "  Nama Pelanggan: Risma Prasasti Adithama" << endl;
							prabayar :
							cout << endl;
							cout << "  Daftar harga:" << endl;
							cout << "	1. 20K - Rp " << harga1 << endl;
							cout << "	2. 50K - Rp " << harga2 << endl;
							cout << "	3. 100K - Rp " << harga3 << endl;
							cout << endl;
							cout << "	";
							cin >> nominal;
							cout << endl;
							
							switch (nominal)
							{
								case (1) :
									{
										cout <<	"	Tagihan           : Rp " << harga1 << endl;
										cout <<	"	Biaya Administrasi: Rp 0" << endl;
										cout << "	Kode Voucher      : ";
										cin >> voucher;
										if (voucher == "HEMAT")
										{
											future = harga1 - (harga1 * 0.2);
											cout << "	Total Pembayaran  : Rp " << future << endl;
											future = -future;
										}
										else
										{
											future = harga1;
											cout << "	Total Pembayaran   : Rp " << future << endl;
											future = -future;
										}
									}
									break;
								case (2) :
									{
										cout <<	"	Tagihan           : Rp " << harga2 << endl;
										cout <<	"	Biaya Administrasi: Rp 0" << endl;
										cout << "	Kode Voucher      : ";
										cin >> voucher;
										if (voucher == "HEMAT")
										{
											future = harga2 - (harga2 * 0.2);
											cout << "	Total Pembayaran  : Rp " << future << endl;
											future = -future;
										}
										else
										{
											future = harga2;
											cout << "	Total Pembayaran  : Rp " << future << endl;
											future = -future;
										}
									}
									break;
								case (3) :
									{
										cout <<	"	Tagihan           : Rp " << harga3 << endl;
										cout <<	"	Biaya Administrasi: Rp 0" << endl;
										cout << "	Kode Voucher      : ";
										cin >> voucher;
										if (voucher == "HEMAT")
										{
											future = harga3 - (harga3 * 0.2);
											cout << "	Total Pembayaran  : Rp " << future << endl;
											future = -future;
										}
										else
										{
											future = harga3;
											cout << "	Total Pembayaran  : Rp " << future << endl;
											future = -future;
										}
									}
									break;
								default :
									{
										cout << endl;
										cout << "	  	   Pilihan tidak ditemukan!" << endl;
										goto prabayar;
									}
							}
						}
						break;
					case (2) :
						{
							cout << "  ID Pelanggan      : ";
							cin >> ID;
							cout << "  Nama Pelanggan    : Risma Prasasti Adithama" << endl;
							cout << endl;
							bulan = 300000;
							cout << "  Tagihan bulan ini : Rp " << bulan << endl;
							cout << "  Biaya Administrasi: Rp 0" << endl;
							cout << "  Kode Voucher      : ";
							cin >> voucher;
							if (voucher == "HEMAT")
							{
								future = bulan - (bulan * 0.2);
								cout << "  Total Pembayaran  : Rp " << future << endl;
								future = -future;
							}
							else
							{
								future = bulan;
								cout << "  Total Pembayaran  : Rp " << future << endl;
								future = -future;
							}
						}
						break;
					default :
						{
							cout << endl;
							cout << "	  	   Pilihan tidak ditemukan!" << endl;
							goto listrik;
						}
				}
				char YT;
				offer4 :
				cout << endl;
				cout << "	  Apakah anda ingin melakukan transaksi lain?" << endl;
				cout << "			  [Y/T]: ";
				cin >> YT;
				if (YT == 'Y' || YT == 'y')
				{
					past = past + future;
					system("cls");
					goto A;
				}
				else if (YT == 'T' || YT == 't')
				{
					system ("cls");
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << "									TERIMA KASIH" << endl;
					cout << "									````````````" << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					goto end4;
				}
				else
				{
					cout << endl;
					cout << "		       Masukan salah!" << endl;
					goto offer4;
				}
				end4:;
			}
			break;
		default :
			{
			cout << endl;
			cout << "	  	   Pilihan tidak ditemukan!" << endl;
			goto B;
			}
	}	
}

int main()
{
	opening();
	password();
	main_menu();
}
