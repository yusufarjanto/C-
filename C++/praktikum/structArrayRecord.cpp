#include<iostream>
#include<iomanip>
using namespace std;

typedef struct {
		string kode_menu;
		string nama;
		float harga; 
		int stok;
	}
	rec_menu; //deklarasi type data record

typedef rec_menu larik_menu [10];//deklarasi larik 

//deklarasi array untuk pembelian
typedef string larik_1 [10];

typedef int larik_2 [10];

//deklarasi record untuk nota
typedef struct {
	string no_nota;
	string tanggal;
	larik_1 kode_menu, nama_menu;
	larik_2 qtt, harga_menu, sub_total;
	int total;
	}
	rec_nota;//deklarasi larik record untuk nota

typedef rec_nota larik_nota [10];

//deklarasi variabel
larik_menu menu;
larik_nota nota_belanja;

string beli;
string ket;
int jumlah;
int bayar;
int kembali;
int total = 0;
int j = 0;
char ya;
int n = 0;
int m = 0;
int i;
int pilih;

struct metode_bayar {
    string ket;
};

metode_bayar daftar_ket[] = {
    {"Cash"},
    {"Debit"},
    {"Kredit"}
};

const int tabel_ket = sizeof(daftar_ket) / sizeof(daftar_ket[0]);

void tambah_menu (larik_menu & X) {

	string menu_baru;

	do {
		ulang:
		system ("cls");
	
		cout << "Masukkan kode menu  : ";
		cin >> menu_baru;

		//validasi
		for ( i = 1; i <= n; i++ ) {
			if ( X[i].kode_menu == menu_baru ) {
				cout << "Kode sudah digunakan, ulangi!" << endl;
				goto ulang;
			}
		}
		//sudah valid

		n++;
		X[n].kode_menu = menu_baru;

		cout << "Masukkan nama menu  : ";
		cin >> X[n].nama;

		cout << "Masukkan harga menu : ";
		cin >> X[n].harga;

		cout << "Masukkan stok awal  : ";
		cin >> X[n].stok;

		cout << "Input berhasil" << endl; 
		cout << "Apakah ingin tambah lagi? <y/t>: ";
		cin >> ya;

	} while ( (ya == 'y') || (ya == 'Y') );
}

void cetak_menu (larik_menu X) {

	system ("cls");

	cout << "Daftar Menu di Gudang saat ini" << endl;
	cout << "================================================================" << endl;
	cout << "| No  |   Kode   |      Nama      |     Harga     |    Stok    |" << endl;
	cout << "================================================================" << endl;
	for ( i = 1; i <= n; i++ )
        cout << "| " << setw(3) << i <<
        " | " << setw(8) << X[i].kode_menu <<
        " | " << setw(14) << X[i].nama <<
        " | " << setw(13) << X[i].harga <<
        " | " << setw(10) << X[i].stok <<
        " |" << endl;
	cout << "================================================================" << endl;
}

void edit_menu (larik_menu & X) {

	string edit; 
	int pos;
	int pilih;
	int tambah_stok; 
	bool ada = false;

	do {
		system ("cls");
		cetak_menu (X);

		cout << endl;
		cout << "Mengedit data" << endl;
		cout << "Masukkan kode menu yang akan diedit : ";
		cin >> edit;

		//cek di larik recordnya
		for ( i = 1; i <= n; i++ ) {
			if ( X[i].kode_menu == edit) {
				pos=i;
				ada=true;
			}//catat posisinya dan menyatakan bahwa status ada=true
		}

		//jika ketemu
		if (ada) {
			cout << "Posisi di record nomor : " << pos<<endl;
			cout << "Nama menu              : " << X[pos].nama<<endl;
			cout << "Harga menu             : " << X[pos].harga<<endl;
			cout << "Stok saat ini          : " << X[pos].stok<<endl;
			cout << endl;

			cout << "Anda bisa mengedit harga menu dan menambah stok " << endl;
			cout << "1. Ubah Harga" << endl;
			cout << "2. Tambah Stok" << endl;
			ulang_pilih:
			cout << "Pilih yang ingin diedit: ";
			cin >> pilih;

			if ( pilih == 1 ) {
				cout<<"Masukkan harga yang baru : Rp ";
				cin>>X[pos].harga;
			}
			else if ( pilih == 2 ) {
				ulangi:
				cout << "Masukkan tambahan stok : ";
				cin >> tambah_stok;
				if ( tambah_stok <= 0 ) {
					cout << "Tambahan stok minimal satu, ulang" << endl;
					goto ulangi;
				}

				else {
					X[pos].stok = X[pos].stok + tambah_stok;
					cout << "Penambahan stok berhasil" << endl;
				}
			}
			else {
				cout << "Salah pilih nomor" << endl;
				goto ulang_pilih;
			}
			cout << "Editing sudah dilakukan" << endl;
		}

		else cout << "Kode menu " << edit << " tidak ditemukan, editing gagal" << endl;
		cout << "Apakah ingin edit lagi? <y/t>: ";
		cin >> ya;

	} while ( (ya == 'y') || (ya == 'Y') );
}
	
void hapus_menu (larik_menu & X) {
	
	int hapus;

	do{
		ulang:
		system ("cls");
		
		cetak_menu (X);

		cout << "Masukkan nomor data yang akan dihapus : ";
		cin >> hapus;

		//validasi
		if ( (hapus < 1) || (hapus > n) ) {
			cout<<"Nomor record tidak valid" << endl;
			goto ulang;
			}

		//sudah valid
		cout << "Yakin akan dihapus <y/t>? ";
		cin >> ya;
		if ( (ya == 'y') || (ya =='Y') ) {
			cout << "Data telah dihapus" << endl;
			for ( i = hapus; i < n; i++ ) X[i] = X[i+1];

			//pergeseran data dari posisi ke i+1 ke posisi i dari posisi data yg dihapus
			n--; //kurangi jumlah record
			}
		else cout << "Data tidak jadi di hapus" << endl;
		cout << "Apakah ingin hapus data lagi <y/t>? ";
		cin >> ya;
	} while ((ya == 'y') || (ya == 'Y'));
}

void cari_menu (larik_menu X) {

	system ("cls");
	string cari; 
	bool ada=false;
	
	cout << "Mengecek harga menu " << endl;
	cout << "Masukkan kode menu yang akan dicek : ";
	cin >> cari;

	//mengecek di larik record
	for ( i = 1; i <= n; i++ ) {
		if (X[i].kode_menu == cari) {
            ada=true;
			cout << "Kode menu  : " << cari << endl;
			cout << "Nama menu  : "<< X[i].nama << endl;
			cout << "Harga menu : Rp "<<X[i].harga << endl;}
		}
	if (! ada) cout << "Kode " << cari << " tidak ditemukan" << endl;
	}


void penjualan (larik_menu & X, larik_nota & Y) {

	ulangi:
	system ("cls");
	
	cout << "Penjualan menu " << endl;
	cetak_menu (X);

	m++; 

	do{

		cout << "Masukkan kode menu yang dibeli : ";
		cin >> beli;

		ulang:
		bool ada = false;
		//cek di larik dan cek stok

		
		for ( i = 1; i <= n; i++ ) {
			if ( X[i].kode_menu == beli ) {
				//cek stok

				ada =true;
				cout << "Jumlah dibeli : ";
				cin >> jumlah;
				if ( X[i].stok >= jumlah) {

					//transaksi
					j++;
					Y[m].kode_menu[j] = X[i].kode_menu;
					Y[m].nama_menu[j] = X[i].nama;
					Y[m].harga_menu[j] = X[i].harga;
					Y[m].qtt[j] = jumlah;
					Y[m].sub_total[j] = jumlah * X[i].harga;
					total = total + Y[m].sub_total[j];
					X[i].stok = X[i].stok - jumlah;//stok dikurangi
				}
				else {
					cout << "Stok tidak tersedia" << endl;
					cout << "Apakah ingin mengulangi? <y/t>: ";
					cin >> ya;
					if ( (ya == 'y') || (ya == 'Y') ) {
						goto ulang;
					}
					else {
						return;
					}
				}

				}//end if ada
			}//end loop for

			ulangi_metode:

        cout << "Pilih metode pembayaran (Kredit dikenakan bunga 15%): " << endl;
        for (i = 0; i < tabel_ket; ++i) {
            cout << i + 1 << ". " << daftar_ket[i].ket << endl;
        }

        int pilihan_metode;

        cout << "Silahkan Pilih Metode Pembayaran: ";
        cin >> pilihan_metode;

        if (pilihan_metode < 1 || pilihan_metode > tabel_ket) {
            cout << "Nomor Pembayaran tidak valid." << endl;
            goto ulangi_metode;
        }

		if (pilihan_metode == 3) {
        total = total + total * 0.15;
    	}


		 if (! ada) {
			cout << "barang tidak tersedia" << endl;
			cout << "Apakah ingin mengulangi? <y/t>: ";
			cin >> ya;
			if ( (ya == 'y') || (ya == 'Y') ) {
				goto ulangi;
			}
			else{
				return;
			}
		}

		 cout << "Apakah akan belanja lagi<y/t>? ";
		 cin >> ya;
		} while ( (ya == 'y') || (ya == 'Y') );

	//masukkan nomor nota dan tanggal
	cout << "Masukkan tanggal DD/MM/YY : ";
	cin >> Y[m].tanggal;
	cout << "Masukkan nomor nota       : ";
	cin >> Y[m].no_nota;
	
	system ("pause");
}

void cetak_nota (larik_nota & Y) {

	bayar_ulang:
	system("cls");

	cout << "Tanggal      : "<<Y[m].tanggal << endl;
	cout << "Nomor nota : "<<Y[m].no_nota << endl;
	cout << "=============================================================================" << endl;
	cout << "| No  |    Kode    |   Nama menu   |     Harga     |   Qtt   |   Subtotal   |" << endl;
	cout << "=============================================================================" << endl;
	for ( i = 1; i <= j; i++ )
		cout << "| " << setw(3) << i <<
		" | " << setw(10)<<Y[m].kode_menu[i] <<
		" | " << setw(13)<<Y[m].nama_menu[i] <<
		" | " << setw(13)<<Y[m].harga_menu[i] <<
		" | " << setw(7)<<Y[m].qtt[i] <<
		" | " << setw(12)<<Y[m].sub_total[i] << " |" << endl;
	cout << "============================================================================="<<endl;
	cout << "Jumlah belanjaan Rp " << setw(8) << total << endl;
	//pembayaran
	
	cout << endl;
	cout << "Bayar : Rp "; 
	cin >> bayar;
	if (bayar<total) {
		cout << "Pembayaran kurang, ulangi" << endl;
		cout << "Apakah ingin mengulangi? <y/t>: ";
		cin >> ya;
		if ( (ya == 'y') || (ya=='Y') ) {
		goto bayar_ulang;
		}
	}
	else {
		kembali = bayar - total;
		cout << "Kembali : Rp " << kembali << endl;
		cout << endl;
		cout << "Terimakasih sudah berbelanja" << endl;
	}
}

int main() {
	do {
			system ("cls");
			cout << "===================================" << endl;
			cout << "|            Data Menu            |" << endl;
			cout << "===================================" << endl;
			cout << "| 1. Input                        |" << endl;
			cout << "| 2. Print                        |" << endl;
			cout << "| 3. Edit                         |" << endl;
			cout << "| 4. Delete                       |" << endl;
			cout << "| 5. Check Prices                 |" << endl;
			cout << "| 6. Sale                         |" << endl;
			cout << "| 0. Out                          |" << endl;
			cout << "===================================" << endl;
			cout << "Pilih menu : ";
			cin >> pilih;
			switch (pilih) {
				case 1: 
                if (n > 10) {
                cout << "Sudah penuh" << endl;
				}
                else tambah_menu (menu);
                break;

				case 2:
                if (n == 0) {
				cout << "Gudang masih kosong" << endl;
				}
                else cetak_menu (menu);
                break;

				case 3: 
                if (n == 0) {
				cout << "Gudang masih kosong" << endl;
				}
                else edit_menu (menu);
                break;

				case 4: 
                if (n == 0) {
				cout << "Gudang masih kosong" << endl;
				}
                else hapus_menu (menu);
                break;

				case 5: 
                if (n == 0) {
				cout << "Gudang masih kosong" << endl;
				}
                else cari_menu (menu);
                break;

				case 6: 
                if (n == 0) {
				cout << "Gudang masih kosong" << endl;
				}
                else {
				penjualan (menu,nota_belanja);
				cetak_nota (nota_belanja);
				}
                break;

				case 0: 
                cout << "Terimakasih" << endl;
                break;

				default: 
                cout << "salah pilih menu" << endl;

				}
			  system ("pause");

		} while (pilih != 0);
}