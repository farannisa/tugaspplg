//bagian deklarasi include, menggunakan library iostream//
#include <iostream>
//bagian deklarasi namespace, menggunakan standard mode//
using namespace std;
//deklarasi function atau main//
int main(int argc, char const *argv[])
{
//deklarasi dari variabel jam dan variabel tarif//
	int jam, tarif;
//sebuah studio musik menyewakan alat-alat musiknya//
	cout<<"PENYEWAAN ALAT-ALAT MUSIK"<<endl;
//jam penyewaan alat musik dari 1 jam s.d 10 jam//
	cout<<"Masukan jam pinjam anda\t";
	cin>>jam;
//tarif 1 jam pertama yaitu rp. 100.000, jika tarif 2 jam 3 jam selanjutnya biaya ditambah 50% dari tarif i jam//
	tarif = jam * 100000 - (100000 * 50 / 100 * (jam - 1));
	cout<<"total uang penyewaan anda adalah:\t"<<tarif<<endl;;
	return 0;
}
