from Mahasiswa import Mahasiswa

arrMahasiswa = []
status = 0
modified = 0
checker = 0

# Input jumlah data
n = int(input("Masukkan jumlah data: "))

# Input data
print("Masukkan data (Nama NIM Prodi Fakultas):")
for i in range (n):
    dataMhs = str(input())
    nama, nim, prodi, fakultas = dataMhs.split()

    # Memasukkan input ke list
    arrMahasiswa.append(Mahasiswa(nama, nim, prodi, fakultas))

# Print output awal
print()
i = 0
print("Initial Output:")
for arrMhs in arrMahasiswa:
    print('\n' + "[Mahasiswa " + str(i + 1) + "]")
    print("Nama:", arrMhs.getNama())
    print("NIM:", arrMhs.getNIM())
    print("Prodi:", arrMhs.getProdi())
    print("Fakultas:", arrMhs.getFakultas())
    i += 1

# Menampilkan opsi modifikasi data
while status != -1:
    print()
    print("Opsi:")
    print("1. Insert")
    print("2. Edit")
    print("3. Delete")
    print("4. Exit")
    op = input("Ketik angka untuk operasi yang ingin dilakukan: ")

    match op:
        case "1": # Opsi Insert
            print("Masukkan data yang ingin ditambah (Nama NIM Prodi Fakultas):")
            dataMhs = str(input())
            nama, nim, prodi, fakultas = dataMhs.split()

            # Memasukkan data tambahan ke list
            arrMahasiswa.append(Mahasiswa(nama, nim, prodi, fakultas))
            modified = 1
        case "2": # Opsi Edit
            tempstr = str(input("Masukkan elemen yang ingin diubah: "))
            edit_temp = str(input("Masukkan penggantinya: "))
            
            checker = 0
            for arrMhs in arrMahasiswa:
                # Mencari data dengan elemen yang sama, kemudian diubah
                if arrMhs.getNama() == tempstr:
                    arrMhs.setNama(edit_temp)
                    checker = 1
                    modified = 1
                elif arrMhs.getNIM() == tempstr:
                    arrMhs.setNIM(edit_temp)
                    checker = 1
                    modified = 1
                elif arrMhs.getProdi() == tempstr:
                    arrMhs.setProdi(edit_temp)
                    checker = 1
                    modified = 1
                elif arrMhs.getFakultas() == tempstr:
                    arrMhs.setFakultas(edit_temp)
                    checker = 1
                    modified = 1
            if(checker != 1):
                    print("[ERROR] Data yang ingin diubah tidak ditemukan.")
                    modified = 0
                
        case "3": # Opsi Delete
            tempstr = str(input("Masukkan salah satu elemen dari bagian list yang ingin dihapus: "))
            checker = 0
            for arrMhs in arrMahasiswa:
                # Mencari index bagian list dengan elemen yang sama, kemudian dikosongkan
                if(arrMhs.getNama() == tempstr or arrMhs.getNIM() == tempstr or arrMhs.getProdi() == tempstr or arrMhs.getFakultas() == tempstr):
                    idx = arrMahasiswa.index(arrMhs)
                    arrMahasiswa.pop(idx)
                    checker = 1
                    modified = 1
            if(checker != 1):
                    print("[ERROR] Data yang ingin dihapus tidak ditemukan.")
                    modified = 0
        case "4": # Opsi Exit
            print("Exiting program . . .")
            status = -1
        case _: # Default
            print("[ERROR] Input yang diketik tidak termasuk dalam opsi.")
            modified = 0

    print()
    if(status != -1 and modified != 0):
        print("Updated Output:")
        i = 0
        for arrMhs in arrMahasiswa:
            print('\n' + "[Mahasiswa " + str(i + 1) + "]")
            print("Nama:", arrMhs.getNama())
            print("NIM:", arrMhs.getNIM())
            print("Prodi:", arrMhs.getProdi())
            print("Fakultas:", arrMhs.getFakultas())
            i += 1
        if(len(arrMahasiswa) == 0):
            print("List kosong.")
    elif(status != -1 and modified == 0):
        print("Tidak ada perubahan yang dilakukan.")
