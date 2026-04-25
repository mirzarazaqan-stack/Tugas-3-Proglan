#ifndef MAHASISWA_HPP
#define MAHASISWA_HPP

#include "orang.hpp"

namespace sim {
    class Mahasiswa : public Orang {
    private:
        std::string jurusan;
        float ipk;

    public:
        Mahasiswa(std::string nama, std::string nrp, std::string jurusan, float ipk);
        void tampilkanData() const override;
        void setIPK(float ipkBaru);
    };
}

#endif