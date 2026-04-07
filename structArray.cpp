#include <iostream>
using namespace std;

struct detailAlamat {
    string desa;
    string kota;
};

struct orang {
    string nama;
    detailAlamat alamat;
    int umur;
};

int main() {

    for  (int i = 0; i <= 2; i++) {
        cout << "Data ke - " << i + 1 << endl;
    }
    orang mhs;
    cout << "Nama Mahasiswa : ";
    getline(cin, mhs.nama);

    cout << "Alamat Desa : ";
    getline(cin, mhs.alamat.desa);

    cout << "Alamat Kota : ";
    getline(cin, mhs.alamat.kota);

    cout << "Umur : ";
    cin >> mhs.umur;
    cout << endl;
    cin.ignore();

    cout << "Nama : " << mhs.nama << endl;
    cout << "Desa : " << mhs.alamat.desa << endl;
    cout << "Kota : " << mhs.alamat.kota << endl;
    cout << "Umur : " << mhs.umur << endl;
}
