#include <iostream>
#include <string>

#include "include/orang.hpp"
#include "include/dosen.hpp"
#include "include/mahasiswa.hpp"
#include "include/tendik.hpp"

using namespace std;
using namespace sim; 

int main() {
    cout << "=== Sistem Informasi Akademik (SIM) ===\n\n";

    Mahasiswa mhs1("Nabil Mirza Razaqan", "5024251119", "Teknik Komputer", 3.85);
    cout << "--- Data Mahasiswa ---" << endl;
    mhs1.tampilkanData(); 
    cout << endl;

    Dosen dsn1("Pak Reza Fuad Rachmadi, S.T., M.T., Ph.D", "19850403201212 1 001", "Teknik Komputer", "Pemrograman lanjut");
    cout << "--- Data Dosen ---" << endl;
    dsn1.tampilkanData();
    cout << endl;

    Tendik tdk1("Pak Muzammil, S.Sos", "197009031990031003", "Kepala Sub Bagian Tata Usaha");
    cout << "--- Data Tendik ---" << endl;
    tdk1.tampilkanData();
    cout << endl;

    return 0;
}
// .\sim_akdemik