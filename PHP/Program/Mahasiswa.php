<?php

class Mahasiswa
{
    private $nama = "";
    private $nim = "";
    private $prodi = "";
    private $fakultas = "";

    public function __construct($nama = "", $nim = "", $prodi = "", $fakultas = ""){
        $this->nama = $nama;
        $this->nim = $nim;
        $this->prodi = $prodi;
        $this->fakultas = $fakultas;
    }

    // Get-set Nama
    public function setNama($nama){
        $this->nama = $nama;
    }

    public function getNama(){
        return $this->nama;
    }

    // Get-set NIM
    public function setNIM($nim){
        $this->nim = $nim;
    }

    public function getNIM(){
        return $this->nim;
    }

    // Get-set Prodi
    public function setProdi($prodi){
        $this->prodi = $prodi;
    }

    public function getProdi(){
        return $this->prodi;
    }

    // Get-set Fakultas
    public function setFakultas($fakultas){
        $this->fakultas = $fakultas;
    }

    public function getFakultas(){
        return $this->fakultas;
    }
}

?>