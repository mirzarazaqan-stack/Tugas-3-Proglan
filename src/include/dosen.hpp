#ifndef DOSEN_HPP
#define DOSEN_HPP

#include "orang.hpp"

namespace sim {
    class Dosen : public Orang {
    private:
        std::string departemen;
        std::string matkul;

    public:
        Dosen(std::string nama, std::string nip, std::string departemen, std::string matkul);
        void tampilkanData() const override;
    };
}

#endif