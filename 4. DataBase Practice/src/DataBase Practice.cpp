#include <iostream>
#include <fstream>

using namespace std;

class Mahasiswa{
    public :
        string nama;
        string NIM;
        string jurusan;

        Mahasiswa(string nama, string NIM, string jurusan){
            Mahasiswa::nama = nama;
            Mahasiswa::NIM = NIM;
            Mahasiswa::jurusan = jurusan;
        }

        string getString(){
            return "\n" + nama + " " + NIM + " " + jurusan;
        }
};

class Dbase{
    public :
        ofstream out;
        ifstream in;
        string fileName;

        Dbase(const char* fileName){
            Dbase::fileName = fileName;
        }

        // Inputan di save di data.txt
        void saveDataMahasiswa(Mahasiswa data){
            cout << "\n" << data.nama << endl;
            cout << data.NIM << endl;
            cout << data.jurusan << "\n" << endl;

            Dbase::out.open(Dbase::fileName, ios::app);
            Dbase::out << data.getString();
            Dbase::out.close();
        }

        // semua data di data.txt ditampilkan kembali 
        void showAllDataMahasiswa(){
            string nama, NIM, jurusan; int index = 1;
            Dbase::in.open(Dbase::fileName, ios::in);

            while(!(Dbase::in.eof())){
                Dbase::in >> nama;
                Dbase::in >> NIM;
                Dbase::in >> jurusan;

                cout << index++ << ".";
                cout << nama << "\t";
                cout << NIM << "\t";
                cout << jurusan << "\t" << endl;
            }

            Dbase::in.close();

        }


};


int main()
{
    Dbase dataBaseMahasiswa = Dbase("data.txt");
    dataBaseMahasiswa.showAllDataMahasiswa();

    // Inputan user
    string nama, NIM, jurusan;
    cin.get();
    cout << "Program Data Mahasiswa\n" << endl;
    cout << "Masukkan Nama : "; cin >> nama;
    cout << "Masukkan NIM : "; cin >> NIM;
    cout << "Masukkan Jurusan : "; cin >> jurusan;

    Mahasiswa dataMahasiswa = Mahasiswa(nama, NIM, jurusan);

    dataBaseMahasiswa.saveDataMahasiswa(dataMahasiswa);

    dataBaseMahasiswa.showAllDataMahasiswa();

    return 0;
}