#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
    public:
    string nama;
    double IPK;

    // constructor dengan parameter
    Mahasiswa(string inputNama, double inputIPK){
        Mahasiswa::nama = inputNama;
        Mahasiswa::IPK = inputIPK;
    }

    // method tanpa parameter tanpa return
    void tampilkanData(){
        cout << "Nama Mahasiswa : " << Mahasiswa::nama << endl;
        cout << "IPK Mahasiswa  : " << Mahasiswa::IPK << endl;
    }

    // method dengan parameter tanpa return
    void ubahNama(const char* namaBaru){
        Mahasiswa::nama = namaBaru;
    }

    // method tanpa parameter dengan return
    string getNama(){
        return Mahasiswa::nama;
    }
    double getIPK(){
        return Mahasiswa::IPK;
    }

    // method dengan parameter dengan return
    double katrolIPK(const double &tambahanNilai){
        return Mahasiswa::IPK + tambahanNilai;
    }

};


int main()
{
    Mahasiswa Mahasiswa1 = Mahasiswa("Benaya", 3.52);
    Mahasiswa Mahasiswa2 = Mahasiswa("Ebenaya", 3.79);
    Mahasiswa1.tampilkanData();
    Mahasiswa2.tampilkanData();

    Mahasiswa1.ubahNama("Kontolodon");
    Mahasiswa1.tampilkanData();

    string dataNama = Mahasiswa1.getNama();
    cout << "Nama Mahasiswa 1 : " << dataNama << endl;
    cout << "IPK Mahasiswa 2  : " << Mahasiswa2.getIPK() << endl;
    cout << "IPK 2 diKatrol   : " << Mahasiswa2.katrolIPK(-1) << endl;
   
    return 0;
}