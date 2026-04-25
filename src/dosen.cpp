#include "include/dosen.hpp"

namespace sim {
    Dosen::Dosen(std::string nama, std::string nip, std::string departemen, std::string matkul)
        : Orang(nama, nip), departemen(departemen), matkul(matkul) {}

    void Dosen::tampilkanData() const {
        std::cout << "[Profil Dosen]\n";
        Orang::tampilkanData();
        std::cout << "Departemen : " << departemen << "\n";
        std::cout << "Matkul     : " << matkul << "\n";
    }
}
