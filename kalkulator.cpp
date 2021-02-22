#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

void help(){
	cout << "Penggunaan: " << "kalkulator" << " [Operasi] [Bilangan 1] [Bilangan 2] atau " << endl;
	cout << "	  : " << "kalkulator" << " [Operasi] [Bilangan 1] " << endl;
	cout << "Ketik \"kalkulator operasi\" Untuk Melihat Jenis Operasi" << endl;
}

void bantuan(){
	cout << "List Operasi : " 
	<< endl 
	<< "1.  t (tambah)" << endl
	<< "2.  k (kurang)" << endl
	<< "3.  x (kali)" << endl
	<< "4.  b (bagi)" << endl
	<< "5.  p (pangkat)" << endl
	<< "6.  a (akar)" << endl
	<< "7.  s (sin)" << endl
	<< "8.  c (cos)" << endl
	<< "9.  g (tan)" << endl
	<< "10. l (log)" << endl
	<< endl;
}

int main(int argc, char *argv[])
{
	
	if (argc <= 2 || argc > 4){
		help();
	}
	
	if (argc == 2 && strcmp(argv[1], "operasi") == 0){
		bantuan();
	}
	
	if (argc == 4 || argc == 3)
	{
	
		char operasi = argv[1][0];
		long int bil1 = atoi(argv[2]);
		long  bil2 = atoi(argv[3]);
		double hasil;
		
		switch (operasi){
			case 't':
				hasil = bil1 + bil2;
				cout << endl;
				cout << "Hasil = " << hasil;
				cout << endl;
				break;
			case 'k':
				hasil = bil1 - bil2;
				cout << endl;
				cout << "Hasil = " << hasil;
				cout << endl;
				break;
			case 'x':
				hasil = bil1 * bil2;
				cout << endl;
				cout << "Hasil = " << hasil;
				cout << endl;
				break;
			case 'b':
				if (bil2 == 0){
					cout << endl;
					cout << "Hasil Tidak Terdefinisi";
					cout << endl;
					break;
				}
				hasil = bil1 / bil2;
				cout << endl;
				cout << "Hasil = " << hasil;
				cout << endl;
				break;
			case 'p':
				hasil = pow (bil1, bil2);
				cout << endl;
				cout << "Hasil = " << hasil;
				cout << endl;
				break;
			
			//3 argumen
			case 'a':
				hasil = sqrt (bil1);
				if (bil1 < 0){
					cout << "Hasil tidak terdefinisi";
					break;
				}
				cout << endl;
				cout << "Hasil = " << hasil;
				cout << endl;
				break;
			case 's':
				if (fmod(bil1, 180) == 0) {
					cout << endl;
					cout << "Hasil = " << 0;
					cout << endl;
					break;
				}
				
				hasil = sin (bil1*M_PI/180);
				cout << endl;
				cout << "Hasil = " << hasil;
				cout << endl;
				break;
			case 'c': 
				if (fmod(bil1 + 90, 180) == 0) {
					cout << endl;
					cout << "Hasil = " << 0;
					cout << endl;
					break;
				}
				
				hasil = cos (bil1*M_PI/180);
				cout << endl;
				cout << "Hasil = " << hasil;
				cout << endl;
				break;
			case 'g':
				if (fmod(bil1 + 90, 180) == 0) {
					cout << endl;
					cout << "Hasil Tidak Terdefinisi";
					cout << endl;
					break;
				}
				
				if (fmod(bil1, 180) == 0) {
					cout << endl;
					cout << "Hasil = " << 0;
					cout << endl;
					break;
				}
				
				hasil = tan (bil1*M_PI/180);
				cout << endl;
				cout << "Hasil = " << hasil;
				cout << endl;
				break;
			case 'l':
				hasil = log10 (bil1);
				cout << endl;
				cout << "Hasil = " << hasil;
				cout << endl;
				break;
			default :
				cout << "Operasi " << argv[1] << " " << "Tidak Ada" << endl;
				help();
		}
	}
}
