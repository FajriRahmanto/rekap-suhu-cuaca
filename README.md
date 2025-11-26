# 🌡️ Program Rekap Data Cuaca Harian

[![C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)
[![Status](https://img.shields.io/badge/Status-Complete-success.svg)]()
[![License](https://img.shields.io/badge/License-Educational-green.svg)]()

Program pencatatan dan analisis data suhu harian menggunakan algoritma Bubble Sort dan analisis tren temperatur.

---

## 📚 Informasi Proyek

- **Mata Kuliah:** Praktik Algoritma
- **Program Studi:** Teknologi Informasi
- **Universitas:** Universitas Negeri Yogyakarta (UNY)
- **Dosen Pengampu:** Muhammad Resa Arif Yudianto M.Kom.

**Anggota Kelompok:**
- Daffa Taufiqurahman (24051130086)
- Fajri Rahmanto (24051130099)

---

## 📝 Deskripsi Program

Program ini dirancang untuk mencatat dan menganalisis data suhu harian dengan fitur:
- Input data suhu untuk jumlah hari yang fleksibel
- Pengurutan data suhu menggunakan **Bubble Sort**
- Perhitungan **rata-rata suhu**
- Analisis **tren suhu** (NAIK/TURUN/STABIL)
- Output terstruktur dan informatif

---

## 🎯 Tujuan Pembelajaran

### Tujuan Akademik:
✅ Menerapkan konsep **array 1 dimensi** untuk penyimpanan data  
✅ Mengimplementasikan **algoritma Bubble Sort**  
✅ Menggunakan **perulangan (loop)** untuk pemrosesan data  
✅ Menggunakan **percabangan (conditional)** untuk analisis  
✅ Menerapkan **modular programming** dengan fungsi terpisah  
✅ Memahami **pass by reference** dan **pass by value**  

### Tujuan Fungsional:
📊 Mengurutkan suhu dari terendah ke tertinggi  
🧮 Menghitung rata-rata suhu  
📈 Menganalisis tren perubahan suhu  
💻 Memberikan output yang informatif  

---

## ✨ Fitur Program

- ✅ **Input Fleksibel:** Dapat menerima data untuk jumlah hari dinamis
- ✅ **Bubble Sort:** Mengurutkan data suhu secara ascending
- ✅ **Analisis Statistik:** Menampilkan rata-rata suhu
- ✅ **Analisis Tren:** Menentukan pola perubahan suhu (NAIK/TURUN/STABIL)
- ✅ **Output Terstruktur:** Informasi lengkap dan mudah dibaca

---

## 🧩 Struktur Program

Program menggunakan pendekatan **modular** dengan 5 fungsi terpisah:

| No | Fungsi | Tipe Return | Parameter | Deskripsi | Pass Method |
|:--:|--------|-------------|-----------|-----------|-------------|
| 1 | `inputSuhu()` | `void` | `int suhu[], int n` | Input data suhu dari user | By Reference |
| 2 | `bubbleSort()` | `void` | `int suhu[], int n` | Mengurutkan suhu (ascending) | By Reference |
| 3 | `hitungRataRata()` | `double` | `const int suhu[], int n` | Menghitung rata-rata | By Value |
| 4 | `cekTren()` | `string` | `const int suhu[], int n` | Analisis tren suhu | By Value |
| 5 | `tampilkanHasil()` | `void` | `const int suhu[], int n, double rataRata, string tren` | Output hasil analisis | By Value |

### Struktur Data:
```cpp
int suhu[n];        // Array untuk data suhu (akan di-sort)
int suhuAsli[n];    // Array untuk data asli (untuk analisis tren)
double rataRata;    // Rata-rata suhu
string tren;        // Tren: "NAIK", "TURUN", atau "STABIL"
```

---

## 🔁 Algoritma

### 1️⃣ Bubble Sort
**Kompleksitas Waktu:** O(n²)  
**Kompleksitas Ruang:** O(1)

**Cara Kerja:**
```
Pass 1: [30, 25, 28] → [25, 30, 28] → [25, 28, 30]
Pass 2: [25, 28, 30] → Sudah terurut ✓
```

**Alasan Pemilihan:**
- Mudah diimplementasikan
- Stabil (tidak mengubah urutan nilai yang sama)
- In-place (tidak memerlukan array tambahan)
- Cocok untuk data kecil-menengah

### 2️⃣ Analisis Tren
**Metode:** Counting approach

**Logika:**
```
Untuk setiap pasangan berurutan:
  - Jika suhu[i] < suhu[i+1] → counter NAIK++
  - Jika suhu[i] > suhu[i+1] → counter TURUN++
  - Jika suhu[i] = suhu[i+1] → tidak dihitung

Hasil:
  - NAIK > TURUN → Tren "NAIK"
  - TURUN > NAIK → Tren "TURUN"
  - NAIK = TURUN → Tren "STABIL"
```

---

## 🛠️ Cara Kompilasi & Jalankan

### Windows (MinGW)
```bash
g++ -o CatatanSuhuMingguan.exe CatatanSuhuMingguan.cpp
CatatanSuhuMingguan.exe
```

### Linux / macOS
```bash
g++ -o CatatanSuhuMingguan CatatanSuhuMingguan.cpp
./CatatanSuhuMingguan
```

### Windows (MSVC)
```bash
cl /EHsc CatatanSuhuMingguan.cpp
CatatanSuhuMingguan.exe
```

---

## 📖 Cara Penggunaan

1. **Jalankan Program**
   ```bash
   ./CatatanSuhuMingguan
   ```

2. **Input Jumlah Hari**
   ```
   Masukkan jumlah hari: 7
   ```

3. **Input Data Suhu**
   ```
   Hari 1: 25
   Hari 2: 27
   Hari 3: 26
   ...
   ```

4. **Lihat Hasil Analisis**
   - Data suhu terurut
   - Rata-rata suhu
   - Tren suhu

---

## 💻 Contoh Output

```
PROGRAM REKAP DATA CUACA HARIAN
================================
Masukkan jumlah hari: 7

Masukkan data suhu:
Hari 1: 25
Hari 2: 27
Hari 3: 26
Hari 4: 28
Hari 5: 30
Hari 6: 29
Hari 7: 31

=== HASIL ANALISIS ===

Suhu Terurut:
25 26 27 28 29 30 31 

Rata-rata: 28 C
Tren: NAIK
```

---

## 🧪 Test Case

### ✅ Test Case 1: Tren NAIK
```
Input: [25, 27, 26, 28, 30]
Output: Tren = "NAIK" (3 naik > 1 turun)
```

### ✅ Test Case 2: Tren TURUN
```
Input: [30, 28, 29, 26, 25]
Output: Tren = "TURUN" (3 turun > 1 naik)
```

### ✅ Test Case 3: Tren STABIL
```
Input: [25, 27, 25, 27, 25]
Output: Tren = "STABIL" (2 naik = 2 turun)
```

### ✅ Test Case 4: Data Sama Semua
```
Input: [25, 25, 25, 25, 25]
Output: Tren = "STABIL" (0 naik = 0 turun)
```

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
| **Total** | **O(n²)** | **O(n²)** | **O(n²)** |

### Kompleksitas Ruang:
- O(n) untuk array suhu
- O(n) untuk array suhuAsli (copy)
- O(1) untuk variabel lainnya
- **Total: O(n)**

---

## ⚠️ Catatan Penting

### 🔴 Hal yang Perlu Diperhatikan:

1. **Fungsi cekTren() HARUS menggunakan data ASLI (sebelum sorting)**
   - ❌ SALAH: Menggunakan array yang sudah di-sort
   - ✅ BENAR: Menggunakan copy array sebelum sorting

2. **Urutan Pemanggilan Fungsi:**
   ```
   inputSuhu() → Copy Array → cekTren() → bubbleSort() → hitungRataRata()
   ```

3. **Tipe Data:**
   - Input suhu: `int` (bilangan bulat)
   - Rata-rata: `double` (desimal)

---

## 🎓 Konsep Pemrograman

- ✅ **Array 1D** - Penyimpanan data
- ✅ **Function** - Modular programming
- ✅ **Loop (for)** - Iterasi data
- ✅ **Conditional (if-else)** - Decision making
- ✅ **Sorting Algorithm** - Bubble sort
- ✅ **Pass by Reference** - Mengubah array asli
- ✅ **Pass by Value** - Tidak mengubah data
- ✅ **Const Parameter** - Melindungi data
- ✅ **Data Type** - int, double, string

---

## 🚀 Pengembangan Lebih Lanjut

Ide pengembangan untuk versi selanjutnya:
- [ ] Implementasi algoritma sorting lain (Quick Sort, Merge Sort)
- [ ] Menampilkan grafik tren suhu (ASCII art)
- [ ] Export hasil ke file CSV/TXT
- [ ] Analisis statistik lanjut (standar deviasi, median)
- [ ] Prediksi suhu hari berikutnya
- [ ] GUI dengan library grafis

---

## 📞 Kontak

**Mahasiswa 1:**  
Fajri Rahmanto  
NIM: 24051130099  
Email: fajrirahmanto.2024@student.uny.ac.id

**Mahasiswa 2:**  
Daffa Taufiqurahman  
NIM: 24051130086  
Email: daffataufiqurahman.2024@student.uny.ac.id

**Dosen Pengampu:**  
Muhammad Resa Arif Yudianto M.Kom.

---

## 📄 Lisensi

Program ini dibuat untuk keperluan edukasi mata kuliah Praktik Algoritma Pemrograman, Program Studi Teknologi Informasi, Fakultas Teknik, Universitas Negeri Yogyakarta.

---

## 🙏 Acknowledgments

- Terima kasih kepada Bapak **Muhammad Resa Arif Yudianto M.Kom.** selaku Dosen Pengampu
- Terima kasih kepada rekan-rekan mahasiswa TI UNY atas dukungannya

---

**Last Updated:** 26 November 2025  
**Version:** 1.1  
**Status:** ✅ Complete

---

⭐ **Jika dokumentasi ini membantu, jangan lupa beri star!**
