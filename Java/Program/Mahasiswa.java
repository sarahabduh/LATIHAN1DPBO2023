package Latihan.Latihan1.Java.Program;

public class Mahasiswa {
    private String nama;
    private String nim;
    private String prodi;
    private String fakultas;

    public Mahasiswa(){
        this.nama = "";
        this.nim = "";
        this.prodi = "";
        this.fakultas = "";
    }

    public Mahasiswa(String nama, String nim, String prodi, String fakultas){
        this.nama = nama;
        this.nim = nim;
        this.prodi = prodi;
        this.fakultas = fakultas;
    }

    // Get-set nama
    public String getNama(){
        return this.nama;
    }

    public void setNama(String nama){
        this.nama = nama;
    }
    
    // Get-set nim
    public String getNIM(){
        return this.nim;
    }

    public void setNIM(String nim){
        this.nim = nim;
    }
    // Get-set prodi
    public String getProdi(){
        return this.prodi;
    }

    public void setProdi(String prodi){
        this.prodi = prodi;
    }
    // Get-set fakultas
    public String getFakultas(){
        return this.fakultas;
    }

    public void setFakultas(String fakultas){
        this.fakultas = fakultas;
    }
}
