#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{

    private:

    string nama;
    string nim;
    string prodi;
    string fakultas;

    public:
    
    // Constructor
    Mahasiswa(){
    }

    Mahasiswa(string nama, string nim, string prodi, string fakultas){
        this->nama = nama;
        this->nim = nim;
        this->prodi = prodi;
        this->fakultas = fakultas;
    }

    // Get-set Nama
    void setNama(string nama){
        this->nama = nama;
    }

    string getNama(){
        return this->nama;
    }

    // Get-set NIM
    void setNIM(string nim){
        this->nim = nim;
    }

    string getNIM(){
        return this->nim;
    }

    // Get-set Prodi
    void setProdi(string prodi){
        this->prodi = prodi;
    }

    string getProdi(){
        return this->prodi;
    }

    // Get-set Fakultas
    void setFakultas(string fakultas){
        this->fakultas = fakultas;
    }

    string getFakultas(){
        return this->fakultas;
    }

    bool comparison(string elemen, string remove){
        return elemen == remove;
    }

    // Deconstructor
    ~Mahasiswa(){
    }

};