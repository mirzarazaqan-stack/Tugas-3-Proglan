# Buat Laporan Disini
# Laporan Programming Assignment 2: Object Oriented Programming

**Nama:** Nabil Mirza Razaqan  
**NRP:** 5024251119  
**Jurusan:** Teknik Komputer, Institut Teknologi Sepuluh Nopember (ITS)  



## 1. Deskripsi Singkat Program
Program ini adalah simulasi Command Line Interface (CLI) untuk Sistem Informasi Akademik (SIM) menggunakan bahasa pemrograman C++. Program dirancang untuk mendata profil entitas warga kampus dengan menerapkan arsitektur *Object Oriented Programming* (OOP) yang modular, di mana deklarasi antarmuka dipisahkan secara tegas dari detail implementasi logikanya untuk meniru standar pengembangan perangkat lunak di industri.

## 2. Konsep OOP yang Diterapkan
Pengerjaan tugas ini difokuskan pada penerapan empat pilar utama pemrograman berbasis objek:
* **Modularitas (File Separation):** Program memisahkan purwarupa (*header* `.hpp`) dan mesin logikanya (*source* `.cpp`). Hal ini mempercepat kompilasi ulang dan mempermudah navigasi kode.
* **Custom Namespace:** Seluruh rancangan kelas dibungkus ke dalam *namespace* buatan sendiri bernama `sim` untuk mencegah *name collision* dengan *library* standar C++.
* **Encapsulation:** Atribut dasar disembunyikan menggunakan *access modifier* `protected` dan `private` untuk menjaga integritas data agar tidak dimanipulasi secara bebas dari luar kelas.
* **Inheritance & Polymorphism:** Pembuatan kelas induk (`Orang`) yang mewariskan atribut umum kepada kelas turunan (`Mahasiswa`, `Dosen`, `Tendik`), yang kemudian dilengkapi dengan *method overriding* untuk mencetak data spesifik tiap kelas.

## 3. Arsitektur dan Penjelasan Fungsi File
Program dibagi menjadi direktori `src/include/` untuk file *header* dan direktori `src/` untuk implementasi fungsi. Berikut adalah rincian peran masing-masing file:

### A. Base Class (Kelas Induk)
* **`orang.hpp`**: Berfungsi sebagai "buku menu" atau kontrak dasar. File ini mendeklarasikan atribut umum (`nama` dan `id`) dengan akses `protected` agar bisa diwariskan, serta mendeklarasikan purwarupa fungsi `virtual void tampilkanData()`.
* **`orang.cpp`**: Berisi implementasi atau "dapur" dari kelas induk. Di sini didefinisikan *constructor* dasar untuk mengisi nama dan ID, serta logika cetak ke layar untuk fungsi `tampilkanData()`.

### B. Derived Classes (Kelas Turunan)
* **`mahasiswa.hpp`, `dosen.hpp`, `tendik.hpp`**: File-file ini mendeklarasikan *class* yang mewarisi sifat `Orang` (contoh: `class Mahasiswa : public Orang`). Di dalamnya terdapat deklarasi atribut spesifik seperti `ipk` untuk mahasiswa, `matkul` untuk dosen, atau `unitKerja` untuk tendik.
* **`mahasiswa.cpp`, `dosen.cpp`, `tendik.cpp`**: File ini berisi implementasi spesifik dengan dua fitur utama:
  1. **Constructor Chaining:** *Constructor* di file ini akan mengirimkan input nama dan ID ke *constructor* kelas `Orang` terlebih dahulu, baru kemudian memproses atribut spesifiknya.
  2. **Method Overriding:** Mengisi instruksi pada fungsi `tampilkanData()`. Logikanya adalah memanggil `Orang::tampilkanData()` untuk mencetak identitas umum, lalu dilanjutkan dengan instruksi `cout` untuk atribut spesifiknya.

## 4. Mekanisme Alur Eksekusi di `main.cpp`
File `main.cpp` bertindak sebagai *entry point* (titik awal) yang mengatur aliran eksekusi program dengan tahapan berikut:
1. **Pre-processing:** File memanggil seluruh file *header* menggunakan direktif `#include "include/[nama_file].hpp"`. Hal ini membuat `main.cpp` mengenali seluruh struktur kelas tanpa perlu menumpuk kode logika di satu tempat.
2. **Deklarasi Namespace:** Menggunakan `using namespace sim;` agar objek dapat langsung dibuat tanpa harus mengetikkan `sim::Mahasiswa`.
3. **Instansiasi Objek:** Program mengalokasikan memori untuk membuat objek baru (`mhs1`, `dsn1`, `tdk1`) dan mengirimkan nilai awal melalui *constructor*.
4. **Pemanggilan Method:** Memanggil instruksi `tampilkanData()` pada setiap objek secara berurutan. Komputer akan melompat ke alamat memori file `.cpp` yang sesuai untuk mengeksekusi perintah cetak ke layar.

## 5. Skenario Pengujian dan Output Terminal
Kompilasi dilakukan menggunakan *compiler* `g++` dengan mengeksekusi perintah kompilasi gabungan (`g++ src/*.cpp -o sim_akademik`). Berikut adalah hasil keluaran program yang membuktikan bahwa data dapat diinisialisasi dan di-*override* dengan benar sesuai hierarki kelasnya:

=== Sistem Informasi Akademik (SIM) ===

--- Data Mahasiswa ---
[Profil Mahasiswa]
Nama       : Nabil Mirza Razaqan
ID/NIP/NRP : 5024251000
Jurusan    : Teknik Komputer
IPK        : 3.85

--- Data Dosen ---
[Profil Dosen]
Nama       : Pak Reza Fuad Rachmadi, S.T., M.T., Ph.D
ID/NIP/NRP : 19850403201212 1 001
Departemen : Teknik Komputer
Matkul     : Pemrograman lanjut

--- Data Tendik ---
[Profil Tenaga Kependidikan]
Nama       : Pak Muzammil, S.Sos
ID/NIP/NRP : 197009031990031003
Unit Kerja : Kepala Sub Bagian Tata Usaha

## 6. Kesimpulan dan Analisis Kendala
Secara keseluruhan, program berhasil diimplementasikan dengan struktur modular yang sangat baik sesuai standar OOP. Kendala teknis utama yang sempat dialami selama proses integrasi kode adalah terjadinya *linker error* (seperti `Mahasiswa was not declared in this scope`). Setelah dilakukan proses *debugging*, kendala ini berhasil diselesaikan dengan memastikan sinkronisasi penyimpanan (*save*) pada text editor, serta memastikan deklarasi `namespace sim` telah konsisten di setiap file `.hpp` sebelum melakukan eksekusi kompilasi gabungan di terminal.