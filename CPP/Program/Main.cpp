#include <bits/stdc++.h>
#include "Mahasiswa.cpp"

int main(){

    int i, n, op, checker, status, modified = 0;
    string nama;
    string nim;
    string prodi;
    string fakultas;
    string tempstr;
    string edit_temp;

    // Linked List Mahasiswa
    list<Mahasiswa> llist;

    // Input jumlah data
    cout << "Masukkan jumlah data: ";
    cin >> n;

    cout << "Masukkan data (Nama NIM Prodi Fakultas):" << '\n';
    for(i = 0; i < n; i++){
        // Inisiasi temporary object
        Mahasiswa temp;

        // Input data
        cin >> nama >> nim >> prodi >> fakultas;

        // Memasukkan input ke temporary object
        temp.setNama(nama);
        temp.setNIM(nim);
        temp.setProdi(prodi);
        temp.setFakultas(fakultas);

        // Memasukkan temporary object ke list
        llist.push_back(temp);
    }

    // Print output awal
    cout << '\n' << "Initial Output: " << '\n';
    i = 0;
    for(list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++){
        cout << "[Mahasiswa " << (i+1) << "]" << '\n';
        cout << "Nama: " << it->getNama() << '\n';
        cout << "NIM: " << it->getNIM() << '\n';
        cout << "Program Studi: " << it->getProdi() << '\n';
        cout << "Fakultas: " << it->getFakultas() << '\n';
        i++;
    } 

    // Menampilkan opsi untuk memodifikasi data
    while(status != -1){
        cout << '\n' << "Opsi: " << '\n';
        cout << "1. Insert" << '\n';
        cout << "2. Edit" << '\n';
        cout << "3. Delete" << '\n';
        cout << "4. Exit" << '\n';
        cout << "Ketik angka untuk operasi yang ingin dilakukan: ";
        cin >> op;

        switch(op){
            /* Opsi Insert */
            case 1:
            {            
            cout << "Masukkan data yang ingin ditambah (Nama NIM Prodi Fakultas):" << '\n';
            Mahasiswa temp;

            // Input data
            cin >> nama >> nim >> prodi >> fakultas;

            // Memasukkan input ke temporary object
            temp.setNama(nama);
            temp.setNIM(nim);
            temp.setProdi(prodi);
            temp.setFakultas(fakultas);

            // Memasukkan temporary object ke list
            llist.push_back(temp);
            modified = 1;

            break;
            }
            /* Opsi Edit */
            case 2:
            cout << "Masukkan elemen yang ingin diubah: ";
            cin >> tempstr;

            cout << "Masukkan penggantinya: ";
            cin >>  edit_temp;

            checker = 0;
            for(list<Mahasiswa>::iterator it = llist.begin(); it != llist.end();){
                // Mencari data dengan elemen yang sama, kemudian diubah
                if(it->getNama() == tempstr){
                    it->setNama(edit_temp);

                    // Penanda data telah ditemukan dan diubah
                    checker = 1;
                    modified = 1;
                }
                else if(it->getNIM() == tempstr){
                    it->setNIM(edit_temp);

                    // Penanda data telah ditemukan dan diubah
                    checker = 1;
                    modified = 1;
                }
                else if(it->getProdi() == tempstr){
                    it->setProdi(edit_temp);

                    // Penanda data telah ditemukan dan diubah
                    checker = 1;
                    modified = 1;
                }
                else if(it->getFakultas() == tempstr){
                    it->setFakultas(edit_temp);

                    // Penanda data telah ditemukan dan diubah
                    checker = 1;
                    modified = 1;
                }
                else{
                    it++;
                }
            }
            if(checker != 1){
                cout << "Data yang ingin diubah tidak ditemukan." << '\n';
                modified = 0;
            }

            break;
            case 3:
            cout << "Masukkan salah satu elemen dari bagian list yang ingin dihapus: ";
            cin >> tempstr;
            checker = 0;
            for(list<Mahasiswa>::iterator it = llist.begin(); it != llist.end();){
                // Mencari data dengan elemen yang sama, kemudian dikosongkan
                if(it->getNama() == tempstr || it->getNIM() == tempstr || it->getProdi() == tempstr || it->getFakultas() == tempstr){
                    it->setNama("");
                    it->setNIM("");
                    it->setProdi("");
                    it->setFakultas("");

                    // Penanda data telah ditemukan dan diubah
                    checker = 1;
                    modified = 1;
                }
                else{
                    it++;
                }
            }
            if(checker != 1){
                cout << "Data yang ingin dihapus tidak ditemukan." << '\n';
                modified = 0;
            }
            break;
            case 4:
            cout << "Exiting program . . .";
            status = -1;
            break;
            default:
            cout << "[ERROR] Input yang diketik tidak termasuk dalam opsi." << '\n';
            modified = 0;
            // Mengembalikan state input 
            cin.clear();
            cin.ignore(1000, '\n');
            break;
        }

        if(status != -1 && modified != 0){
            // Print data yang sudah dimodifikasi
            cout << '\n' << "Updated Output:" << '\n';
            i = 0;
            for(list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++){
                if(it->getNama() != "" || it->getNIM() != "" || it->getProdi() != "" || it->getFakultas() != ""){
                    cout << "[Mahasiswa " << (i+1) << "]" << '\n';
                    cout << "Nama: " << it->getNama() << '\n';
                    cout << "NIM: " << it->getNIM() << '\n';
                    cout << "Program Studi: " << it->getProdi() << '\n';
                    cout << "Fakultas: " << it->getFakultas() << '\n';
                    i++;
                }
            }
            if(i == 0){
                cout << "List kosong" << '\n';
            }
        }
        else if(status != -1 && modified == 0){
            cout << "Tidak ada perubahan yang dilakukan." << '\n';
        }
        else{
            return 0;
        }
    }
}

