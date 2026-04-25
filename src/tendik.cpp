#include "include/tendik.hpp"

namespace sim {
    Tendik::Tendik(std::string nama, std::string nip, std::string unitKerja)
        : Orang(nama, nip), unitKerja(unitKerja) {}

    void Tendik::tampilkanData() const {
        std::cout << "[Profil Tenaga Kependidikan]\n";
        Orang::tampilkanData();
        std::cout << "Unit Kerja : " << unitKerja << "\n";
    }
}