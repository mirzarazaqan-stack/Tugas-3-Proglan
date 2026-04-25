#include "include/mahasiswa.hpp"

namespace sim {
    Mahasiswa::Mahasiswa(std::string nama, std::string nrp, std::string jurusan, float ipk) 
        : Orang(nama, nrp), jurusan(jurusan), ipk(ipk) {}
    
    void Mahasiswa::tampilkanData() const {
        std::cout << "[Profil Mahasiswa]\n";
        Orang::tampilkanData(); 
        std::cout << "Jurusan    : " << jurusan << "\n";
        std::cout << "IPK        : " << ipk << "\n";
    }

    void Mahasiswa::setIPK(float ipkBaru) {
        ipk = ipkBaru;
        std::cout << ">> Info: IPK " << nama << " telah diperbarui menjadi " << ipk << "\n";
    }
}