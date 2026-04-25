#ifndef TENDIK_HPP
#define TENDIK_HPP

#include "orang.hpp"

namespace sim {
    class Tendik : public Orang {
    private:
        std::string unitKerja;

    public:
        Tendik(std::string nama, std::string nip, std::string unitKerja);
        void tampilkanData() const override;
    };
}

#endif