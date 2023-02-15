package Latihan.Latihan1.Java.Program;

import java.util.Scanner;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        int i = 0, n = 0, op = 0;
        int status = 0, checker = 0, modified = 0;
        String nama;
        String nim;
        String prodi;
        String fakultas;
        String tempstr;
        String edit_temp;

        // List Mahasiswa
        ArrayList<Mahasiswa> list = new ArrayList<>();

        // Objek Scanner untuk input
        Scanner sc = new Scanner(System.in);
        
        // Input jumlah data
        System.out.print("Masukkan jumlah data: ");
        n = sc.nextInt();

        System.out.println("Masukkan data (Nama NIM Prodi Fakultas):");
        for(i = 0; i < n; i++){
            nama = sc.next();
            nim = sc.next();
            prodi = sc.next();
            fakultas = sc.next();

            // Memasukkan input ke temporary object
            Mahasiswa temp = new Mahasiswa();
            temp.setNama(nama);
            temp.setNIM(nim);
            temp.setProdi(prodi);
            temp.setFakultas(fakultas);

            // Memasukkan temporary object ke list
            list.add(temp);
        }

        /* Print Output Awal */
        System.out.println("Initial Output:");
        for(i = 0; i < list.size(); i++){
            System.out.println("\n[Mahasiswa " + Integer.toString(i + 1) + "]");
            System.out.println("Nama: " + list.get(i).getNama());
            System.out.println("NIM: " + list.get(i).getNIM());
            System.out.println("Prodi: " + list.get(i).getProdi());
            System.out.println("Fakultas: " + list.get(i).getFakultas());
        }
        
        System.out.println();
        while(status != -1){
            /* Opsi untuk memodifikasi data */
            System.out.println("Opsi:");
            System.out.println("1. Insert");
            System.out.println("2. Edit");
            System.out.println("3. Delete");
            System.out.println("4. Exit");

            System.out.print("Ketik angka untuk operasi yang ingin dilakukan: ");
            op = sc.nextInt();

            switch(op){
                case 1:
                /* Insert data */
                System.out.println("Masukkan data yang ingin ditambah (Nama NIM Prodi Fakultas):");
                nama = sc.next();
                nim = sc.next();
                prodi = sc.next();
                fakultas = sc.next();
                
                // Input data ke temporary object
                Mahasiswa temp = new Mahasiswa();
                temp.setNama(nama);
                temp.setNIM(nim);
                temp.setProdi(prodi);
                temp.setFakultas(fakultas);
                
                // Input temporary object ke list
                list.add(temp);
                modified = 1;
                break;
                case 2:
                /* Edit data */
                System.out.print("Masukkan elemen yang ingin diubah: ");
                tempstr = sc.next();
                System.out.print("Masukkan penggantinya: ");
                edit_temp = sc.next();

                checker = 0;
                for(i = 0; i < list.size(); i++){
                    // Mencari data dengan elemen yang sama, kemudian diubah
                    if(list.get(i).getNama().equals(tempstr)){
                        list.get(i).setNama(edit_temp);
                        
                        // Penanda data telah ditemukan dan diubah
                        checker = 1;
                        modified = 1;
                    }
                    else if(list.get(i).getNIM().equals(tempstr)){
                        list.get(i).setNIM(edit_temp);

                        checker = 1;
                        modified = 1;
                    }
                    else if(list.get(i).getProdi().equals(tempstr)){
                        list.get(i).setProdi(edit_temp);

                        checker = 1;
                        modified = 1;
                    }
                    else if(list.get(i).getFakultas().equals(tempstr)){
                        list.get(i).setFakultas(edit_temp);

                        checker = 1;
                        modified = 1;
                    }
                }
                if(checker != 1){
                    System.out.println("Data yang ingin diubah tidak ditemukan.");
                    modified = 0;
                }
                break;
                case 3:
                System.out.print("Masukkan salah satu elemen dari bagian list yang ingin dihapus: ");
                tempstr = sc.next();

                checker = 0;
                for(i = 0; i < list.size(); i++){
                    //  Mencari indeks data dengan elemen yang sama, kemudian dihapus
                    if(list.get(i).getNama().equals(tempstr) || list.get(i).getNIM().equals(tempstr) || list.get(i).getProdi().equals(tempstr) || list.get(i).getFakultas().equals(tempstr)){
                        list.remove(i);

                        checker = 1;
                        modified = 1;
                    }
                }
                if(checker != 1){
                    System.out.println("Data yang ingin dihapus tidak ditemukan.");
                    modified = 0;
                }
                break;
                case 4:
                System.out.println("Exiting program. . .");
                status = -1;
                break;
                default:
                System.out.println("[ERROR] Input yang diketik tidak termasuk dalam opsi.");
                modified = 0;
                break;
            }

            if(status != -1 && modified != 0){
                /* Print Output yang sudah dimodifikasi */
                System.out.println("Updated Output:");
                i = 0;
                for(i = 0; i < list.size(); i++){
                    System.out.println("\n[Mahasiswa " + Integer.toString(i + 1) + "]");
                    System.out.println("Nama: " + list.get(i).getNama());
                    System.out.println("NIM: " + list.get(i).getNIM());
                    System.out.println("Prodi: " + list.get(i).getProdi());
                    System.out.println("Fakultas: " + list.get(i).getFakultas());
                }
                if(list.isEmpty()){
                    System.out.println("List kosong");
                }
                else if(status != -1 && modified == 0){
                    System.out.println("Tidak ada perubahan yang dilakukan");
                }
            }
        }
        
        // Close scanner
        sc.close();
    }
}
