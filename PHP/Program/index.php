<?php

    include "Mahasiswa.php";

    $Mahasiswa1 = new Mahasiswa("Sarah", "2002939", "Ilkom", "FPMIPA");
  
    echo "<b> Mahasiswa 1: </b>". "<br>";
    echo "| Nama            : ". $Mahasiswa1->getNama(). "<br>";
    echo "| NIM             : ". $Mahasiswa1->getNIM(). "<br>";
    echo "| Program Studi   : ". $Mahasiswa1->getProdi(). "<br>";
    echo "| Fakultas        : ". $Mahasiswa1->getFakultas(). "<br><br>";

    $Mahasiswa2 = new Mahasiswa();
    $Mahasiswa2->setNama("Venven");
    $Mahasiswa2->setNIM("1902939");
    $Mahasiswa2->setProdi("Musik");
    $Mahasiswa2->setFakultas("FPSD");

    echo "<b> Mahasiswa 2: </b>". "<br>";
    echo "| Nama            : ". $Mahasiswa2->getNama(). "<br>";
    echo "| NIM             : ". $Mahasiswa2->getNIM(). "<br>";
    echo "| Program Studi   : ". $Mahasiswa2->getProdi(). "<br>";
    echo "| Fakultas        : ". $Mahasiswa2->getFakultas(). "<br><br>";
?>