# 🌡 Program Rekap Data Cuaca Harian dan Tren Temperatur



[![Language](https://img.shields.io/badge/Language-C++-blue.svg)](https://isocpp.org/)

[![Status](https://img.shields.io/badge/Status-Complete-success.svg)]()

[![License](https://img.shields.io/badge/License-Educational-green.svg)]()



*Mata Kuliah:* Praktik Algoritma

*Program Studi:* Teknologi Informasi

*Universitas:* Universitas Negeri Yogyakarta (UNY)

*Anggota Kelompok:*

- Daffa Taufiqurahman_24051130086

- Fajri Rahmanto_24051130099



---



## 📋 Daftar Isi

- [Latar Belakang](#-latar-belakang)

- [Tujuan Program](#-tujuan-program)

- [Fitur Program](#-fitur-program)

- [Struktur Program](#-struktur-program)

- [Algoritma](#-algoritma)

- [Flowchart](#-flowchart)

- [Cara Kompilasi](#-cara-kompilasi)

- [Cara Penggunaan](#-cara-penggunaan)

- [Contoh Output](#-contoh-output)

- [Dokumentasi Lengkap](#-dokumentasi-lengkap)



---



## 🧠 Latar Belakang



Suhu Udara merupakan salah satu factor penting yang memengaruhi berbagai aspek kehidupan manusia, mulai dari Kesehatan, aktivitas sehari-hari, hingga sector pertanian dan perencanaan lingkungan. Setiap hari, suhu dapat berubah-ubah tergantung pada kondisi cuaca, Waktu, serta factor geografis. Oleh karena itu, mencatat dan menganalisis perubahan suhu secara teratur dapat membantu dalam memahami pola cuaca dan memprediksi kondisi lingkungan di hari-hari berikutnya.



Dalam dunia teknologi informasi, pengolahan data seperti pencatatan suhu dapat dilakukan secara otomatis menggunakan program computer. Program semacam ini dapat membantu manusia untuk mengamati tren suhu tanpa harus mencatat dan menghitung secara manual. Selain itu, pembuatan program sederhana juga menjadi sarana pembelajaran yang baik untuk memahami konsep dasar pemrograman terstruktur, seperti array, perulangan, percabangan, dan algoritma pengurutan (sorting).



Melalui proyek ini, dibuatlah sebuah program pencatatan suhu harian yang *fleksibel* (dapat digunakan untuk 7 hari, 30 hari, atau hingga 100 hari). Program ini meminta pengguna untuk memasukkan data suhu harian dalam derajat Celcius, kemudian program akan:

- Mengurutkan data suhu dari yang paling rendah ke paling tinggi menggunakan *algoritma Bubble Sort*

- Menghitung *rata-rata suhu* selama periode Waktu tersebut

- Menentukan *tren suhu* (NAIK/TURUN/STABIL) berdasarkan pola perubahan data harian



Program ini dirancang dengan pendekatan *modular* menggunakan 5 fungsi terpisah yang sesuai dengan prinsip separation of concerns, sehingga mudah dipahami, di-maintain, dan dikembangkan lebih lanjut.



Dengan demikian, pembuatan program pencatatan suhu ini tidak hanya bermanfaat untuk mengenali pola perubahan cuaca, tetapi juga menjadi sarana untuk mengasah kemampuan analisis logika dan pemrograman dasar. Proyek ini merupakan contoh penerapan sederhana dari algoritma dan struktur data dalam menyelesaikan permasalahan nyata secara efisien dan terstruktur.



---



## 🎯 Tujuan Program



Tujuan dari pembuatan program ini adalah:



### Tujuan Akademik:

1. ✅ Menerapkan konsep *array 1 dimensi* untuk menyimpan data suhu harian

2. ✅ Mengimplementasikan *algoritma Bubble Sort* untuk mengurutkan data

3. ✅ Menggunakan *perulangan (loop)* untuk memproses data secara efisien

4. ✅ Menggunakan *percabangan (conditional)* untuk analisis tren

5. ✅ Menerapkan *modular programming* dengan fungsi terpisah

6. ✅ Memahami konsep *pass by reference* dan *pass by value*



### Tujuan Fungsional:

1. 📊 Mengurutkan suhu dari yang terendah ke tertinggi

2. 🧮 Menghitung rata-rata suhu dalam periode tertentu

3. 📈 Menganalisis tren perubahan suhu (NAIK/TURUN/STABIL)

4. 💻 Memberikan output yang informatif dan mudah dipahami

5. ✔ Melakukan validasi input untuk menghindari error



---



## ✨ Fitur Program



### 🔹 Fitur Utama:

- ✅ *Input Fleksibel*: Dapat menerima data 1-100 hari

- ✅ *Validasi Input*: Mencegah input yang tidak valid

- ✅ *Bubble Sort*: Mengurutkan data secara ascending

- ✅ *Analisis Statistik*: Menampilkan min, max, dan rata-rata

- ✅ *Analisis Tren*: Menentukan pola perubahan suhu

- ✅ *Output Terstruktur*: Informasi lengkap dan mudah dibaca



### 🔹 Keunggulan Teknis:

- 🎯 *Modular*: 5 fungsi terpisah sesuai tanggung jawab

- 📐 *Terstruktur*: Mengikuti best practice pemrograman

- 🔒 *Safe*: Menggunakan const untuk parameter yang tidak diubah

- 💡 *Efisien*: Kompleksitas O(n²) cocok untuk data kecil-menengah

- 📝 *Dokumentasi*: Setiap fungsi memiliki komentar lengkap



---



## 🧩 Struktur Program



Program ini menggunakan pendekatan *modular* dengan pembagian fungsi sebagai berikut:



### 📌 Main Program

cpp

int main()



- Koordinasi semua fungsi

- Validasi input jumlah hari

- Manajemen flow program



### 🔧 5 Fungsi Utama:



| No | Fungsi | Tipe Return | Parameter | Deskripsi | Pass Method |

|:--:|--------|-------------|-----------|-----------|-------------|

| 1 | inputSuhu() | void | int suhu[], int n | Input data suhu dari user | By Reference |

| 2 | bubbleSort() | void | int suhu[], int n | Mengurutkan suhu (ascending) | By Reference |

| 3 | hitungRataRata() | double | const int suhu[], int n | Menghitung rata-rata | By Value |

| 4 | cekTren() | string | const int suhu[], int n | Analisis tren suhu | By Value |

| 5 | tampilkanHasil() | void | const int suhu[], int n, double rataRata, string tren | Output hasil analisis | By Value |



### 📊 Struktur Data:

cpp

const int MAX_HARI = 100;      // Maksimal data yang dapat diinput

int suhu[MAX_HARI];            // Array untuk data suhu (sorted)

int suhuAsli[MAX_HARI];        // Array untuk data asli (untuk cek tren)

double rataRata;               // Rata-rata suhu

string tren;                   // Tren: "NAIK", "TURUN", atau "STABIL"





---



## 🔁 Algoritma



### 1️⃣ *Bubble Sort*

*Kompleksitas Waktu:* O(n²)

*Kompleksitas Ruang:* O(1)



*Alasan Pemilihan:*

- ✅ Mudah diimplementasikan untuk data berukuran kecil-menengah

- ✅ *Stabil* (tidak mengubah urutan nilai yang sama)

- ✅ *In-place* (tidak memerlukan array tambahan)

- ✅ Cocok untuk data suhu harian (7-100 elemen)



*Cara Kerja:*



Pass 1: [30, 25, 28] → [25, 30, 28] → [25, 28, 30]

Pass 2: [25, 28, 30] → Sudah terurut ✓





### 2️⃣ *Analisis Tren*

*Metode:* Counting approach



*Logika:*



Untuk setiap pasangan berurutan:

  - Jika suhu[i] < suhu[i+1] → counter NAIK++

  - Jika suhu[i] > suhu[i+1] → counter TURUN++

  - Jika suhu[i] = suhu[i+1] → tidak dihitung



Hasil:

  - NAIK > TURUN → Tren "NAIK"

  - TURUN > NAIK → Tren "TURUN"

  - NAIK = TURUN → Tren "STABIL"





---



## 📊 Flowchart



Program ini menggunakan *Flowchart Modular* dengan 6 diagram terpisah:



### 🏠 Main Program (Flowchart Utama)

Menunjukkan alur eksekusi program dari awal hingga akhir dengan pemanggilan fungsi.



### 1️⃣ Fungsi inputSuhu()

Detail proses input data suhu dengan loop.



### 2️⃣ Fungsi bubbleSort()

Detail algoritma bubble sort dengan nested loop.



### 3️⃣ Fungsi hitungRataRata()

Detail perhitungan rata-rata dengan akumulasi.



### 4️⃣ Fungsi cekTren()

Detail analisis tren dengan counting dan decision.



### 5️⃣ Fungsi tampilkanHasil()

Detail output hasil dengan loop.



*📁 File Flowchart:*

- FLOWCHART_LENGKAP_SEMUA.mermaid - Semua flowchart dalam 1 file

- flowchart_ALL_IN_ONE.html - Visualisasi interaktif

- DOKUMENTASI_LENGKAP.md - Dokumentasi detail dengan penjelasan



*🔗 Cara Melihat Flowchart:*

1. Buka flowchart_ALL_IN_ONE.html di browser

2. Atau buka https://mermaid.live/ dan paste kode dari file .mermaid



---



## 🔧 Cara Kompilasi



### Linux / macOS:

bash

g++ -o rekap_cuaca rekap_cuaca.cpp

./rekap_cuaca





### Windows (MinGW):

bash

g++ -o rekap_cuaca.exe rekap_cuaca.cpp

rekap_cuaca.exe





### Windows (MSVC):

bash

cl /EHsc rekap_cuaca.cpp

rekap_cuaca.exe





### Online Compiler:

- [OnlineGDB](https://www.onlinegdb.com/)

- [Replit](https://replit.com/)

- [Programiz](https://www.programiz.com/cpp-programming/online-compiler/)



---



## 📖 Cara Penggunaan



### Langkah-Langkah:



1. *Jalankan Program*

bash

   ./rekap_cuaca





2. *Input Jumlah Hari*



   Masukkan jumlah hari (1-100): 7





3. *Input Data Suhu*



   Hari ke-1 : 25

   Hari ke-2 : 27

   Hari ke-3 : 26

   ...





4. *Lihat Hasil*

   Program akan menampilkan:

   - Data suhu terurut

   - Statistik (min, max, rata-rata)

   - Tren suhu



---



## 💻 Contoh Output



========================================

  PROGRAM REKAP DATA CUACA HARIAN

========================================

Analisis Suhu Harian dan Tren Temperatur

========================================



Masukkan jumlah hari (1-100): 7



========================================

INPUT DATA SUHU

========================================

Masukkan data suhu harian (dalam Celcius):

Hari ke-1 : 25

Hari ke-2 : 27

Hari ke-3 : 26

Hari ke-4 : 28

Hari ke-5 : 30

Hari ke-6 : 29

Hari ke-7 : 31



Data berhasil diinput!

Data berhasil diurutkan!



========================================

       HASIL ANALISIS SUHU HARIAN

========================================



SUHU TERURUT (Rendah ke Tinggi):

----------------------------------------

Hari ke- 1 :  25 C

Hari ke- 2 :  26 C

Hari ke- 3 :  27 C

Hari ke- 4 :  28 C

Hari ke- 5 :  29 C

Hari ke- 6 :  30 C

Hari ke- 7 :  31 C



----------------------------------------

STATISTIK:

----------------------------------------

Jumlah Data    : 7 hari

Suhu Terendah  : 25 C

Suhu Tertinggi : 31 C

Rata-rata Suhu : 28.00 C

Tren Suhu      : NAIK

========================================



========================================

PROGRAM SELESAI

========================================





---



## 📚 Dokumentasi Lengkap



### File-file Proyek:



├── rekap_cuaca.cpp                    # Source code program

├── FLOWCHART_LENGKAP_SEMUA.mermaid    # Kode Mermaid flowchart

├── flowchart_ALL_IN_ONE.html          # Visualisasi interaktif

├── DOKUMENTASI_LENGKAP.md             # Dokumentasi detail

├── README.md                           # File ini

└── PANDUAN_SINGKAT.txt                # Quick reference guide





### Dokumentasi Tambahan:

- 📘 *DOKUMENTASI_LENGKAP.md* - Penjelasan algoritma, pseudocode, contoh

- 🎨 *flowchart_ALL_IN_ONE.html* - Flowchart interaktif dengan zoom

- 📝 *PANDUAN_SINGKAT.txt* - Tips penggunaan dan troubleshooting



---



## 🧪 Test Cases



### ✅ Test Case 1: Tren NAIK



Input: [25, 27, 26, 28, 30]

Output: Tren = "NAIK" (3 naik > 1 turun)





### ✅ Test Case 2: Tren TURUN



Input: [30, 28, 29, 26, 25]

Output: Tren = "TURUN" (3 turun > 1 naik)





### ✅ Test Case 3: Tren STABIL



Input: [25, 27, 25, 27, 25]

Output: Tren = "STABIL" (2 naik = 2 turun)





### ✅ Test Case 4: Data Sama Semua



Input: [25, 25, 25, 25, 25]

Output: Tren = "STABIL" (0 naik = 0 turun)





---



## 🔍 Analisis Kompleksitas



### Kompleksitas Waktu:

| Operasi | Best Case | Average Case | Worst Case |

|---------|-----------|--------------|------------|

| Input | O(n) | O(n) | O(n) |

| Bubble Sort | O(n) | O(n²) | O(n²) |

| Rata-rata | O(n) | O(n) | O(n) |

| Cek Tren | O(n) | O(n) | O(n) |

| Output | O(n) | O(n) | O(n) |

| *Total* | *O(n²)* | *O(n²)* | *O(n²)* |



### Kompleksitas Ruang:

- O(n) untuk array suhu

- O(n) untuk array suhuAsli (copy)

- O(1) untuk variable lainnya

- *Total: O(n)*



---



## ⚠ Catatan Penting



### 🔴 Penting untuk Diperhatikan:

1. **Fungsi cekTren() HARUS menggunakan data ASLI (sebelum sorting)**

   - ❌ SALAH: Menggunakan array yang sudah di-sort

   - ✅ BENAR: Menggunakan copy array sebelum sorting



2. *Urutan Pemanggilan Fungsi:*



   inputSuhu() → Copy Array → cekTren() → bubbleSort() → hitungRataRata()





3. *Validasi Input:*

   - Program akan menolak input jika n <= 0 atau n > 100



4. *Tipe Data:*

   - Input suhu: int (bilangan bulat)

   - Rata-rata: double (2 digit decimal)



---



## 🎓 Konsep Pemrograman yang Digunakan



- ✅ *Array 1D* - Penyimpanan data

- ✅ *Function* - Modular programming

- ✅ *Loop (for)* - Iterasi data

- ✅ *Conditional (if-else)* - Decision making

- ✅ *Sorting Algorithm* - Bubble sort

- ✅ *Pass by Reference* - Mengubah array asli

- ✅ *Pass by Value* - Tidak mengubah data

- ✅ *Const Parameter* - Melindungi data

- ✅ *Data Type* - int, double, string



---



## 🚀 Pengembangan Lebih Lanjut



Ide pengembangan untuk versi selanjutnya:

- [ ] Implementasi algoritma sorting lain (Quick Sort, Merge Sort)

- [ ] Menampilkan grafik tren suhu (ASCII art)

- [ ] Export hasil ke file CSV/TXT

- [ ] Analisis statistic lanjut (standar deviasi, median)

- [ ] Prediksi suhu hari berikutnya

- [ ] GUI dengan library grafis



---



## 📞 Kontak



*Mahasiswa:* Fajri Rahmanto

*NIM:* 24051130099

*Program Studi:* Teknologi Informasi

*Universitas:* Universitas Negeri Yogyakarta (UNY)

*Email:* fajrirahmanto.2024@student.uny.ac.id



*Mahasiswa:* Daffa Taufiqurahman

*NIM:* 24051130086

*Program Studi:* Teknologi Informasi

*Universitas:* Universitas Negeri Yogyakarta (UNY)

*Email:* daffataufiqurahman.2024@student.uny.ac.id



*Dosen Pengampu Mata Kuliah:*

Muhammad Resa Arif Yudianto M.Kom.

---



## 📄 Lisensi



Program ini dibuat untuk keperluan Project UAS mata kuliah Praktik Algoritma Pemrograman ,Fakultas Teknik Program Studi Teknologi Informasi , Universitas Negeri Yogyakarta.



---



## 🙏 Acknowledgments



- Terima kasih kepada Bapak *Muhammad Resa Arif Yudianto M.Kom.* selaku Dosen Pengampu Mata Kuliah Praktik Algoritma Pemrograman

- Terima kasih kepada rekan-rekan mahasiswa TI UNY atas dukungannya



---



*Last Updated:* 18 November 2025

*Version:* 1.0

*Status:* ✅ Complete



---



⭐ *Jika dokumentasi ini membantu, jangan lupa beri star!*
