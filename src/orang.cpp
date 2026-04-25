#include "include/orang.hpp"

namespace sim {

    Orang::Orang(std::string nama, std::string id) : nama(nama), id(id) {}

    void Orang::tampilkanData() const {
        std::cout << "Nama       : " << nama << "\n";
        std::cout << "ID/NIP/NRP : " << id << "\n";
    }
}