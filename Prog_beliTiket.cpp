//Program pembelian Tiket
#include <iostream>
using namespace std;
main()
{

int a, b;
char noHP[14];
string nama;
	cout << "selamat datang di program pembelian tiket \n \n";
	cout << "Masukkan nama anda \n";
	cin >> nama;
	
	cout << "Masukkan nomor Handphone \n";
	cin >> noHP;
	cout << "\n Pilih waktu yang anda inginkan (jam) \n";
	cout << "Type '1' untuk memilih pukul 13.00 \ntype '2' untuk memilih pukul 15.00 \n";
	cin >> a;
	
	if (a=1)
		{
		cout << "pilih kursi dengan mengetik sesuai nomor kursi (1 sampai 4)";
		 cin >> b;
		cout << "pilihan anda adalah pukul 13.00, kursi " << b;
		}
	else
		 {
	    	cout << "pilih kursi dengan mengetik sesuai nomor kursi (1 sampai 4)";
		    cin >> b;
		    cout << "pilihan anda adalah pukul 15.00, kursi \n" << b;
		 }
	

	cout <<endl<<endl;;
	cout << "kode booking anda adalah " << "PO" << nama << noHP << endl << "\n silahkan bayar di minimarket, atm atau e-banking dengan mencantumkan kode booking tersebut";
	cout << "\n terima kasih sudah membeli tiket melalui program ini";
	
	

	return 0;
}

