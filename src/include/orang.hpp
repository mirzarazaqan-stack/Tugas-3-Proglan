#ifndef ORANG_HPP
#define ORANG_HPP

#include <string>
#include <iostream>

namespace sim {
    class Orang {
    protected:
        std::string nama;
        std::string id; 

    public:
        Orang(std::string nama, std::string id);
        virtual void tampilkanData() const; 
        virtual ~Orang() {} 
    };
}

#endif