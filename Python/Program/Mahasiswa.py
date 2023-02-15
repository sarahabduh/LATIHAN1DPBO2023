class Mahasiswa:
    __nama = ""
    __nim = ""
    __prodi = ""
    __fakultas = ""

    def __init__(self, nama = "", nim = "", prodi = "", fakultas = ""):
        self.__nama = nama
        self.__nim = nim
        self.__prodi = prodi
        self.__fakultas = fakultas

    # Get-set Nama
    def setNama(self, nama):
        self.__nama = nama

    def getNama(self):
        return self.__nama
    
    # Get-set NIM
    def setNIM(self, nim):
        self.__nim = nim

    def getNIM(self):
        return self.__nim

    # Get-set Prodi
    def setProdi(self, prodi):
        self.__prodi = prodi

    def getProdi(self):
        return self.__prodi

    # Get-set Fakultas
    def setFakultas(self, fakultas):
        self.__fakultas = fakultas

    def getFakultas(self):
        return self.__fakultas