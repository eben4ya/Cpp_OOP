#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
    public:
        string nama;
        string NIU;
        string jurusan;
        double IPK;

        /* constructor tanpa parameter
        Mahasiswa(){
            cout << "ini adalah constructor" << endl;
        } */

        // constructor dengan parameter
        Mahasiswa(string inputNama, string inputNIU, string inputJurusan, double inputIPK){
            Mahasiswa::nama = inputNama;
            Mahasiswa::NIU = inputNIU;
            Mahasiswa::jurusan = inputJurusan;
            Mahasiswa::IPK = inputIPK;

            cout << "Nama Mahasiswa    : " << Mahasiswa::nama << endl;
            cout << "NIU Mahasiswa     : " << Mahasiswa::NIU << endl;
            cout << "Jurusan Mahasiswa : " << Mahasiswa::jurusan << endl;
            cout << "IPK Mahasiswa     : " << Mahasiswa::IPK << endl;
        }
};

int main()
{
    Mahasiswa data1 = Mahasiswa("Benaya","494790","TIF", 3.52);

    return 0;
}