#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void inputSuhu(int suhu[], int n);
void bubbleSort(int suhu[], int n);
double hitungRataRata(const int suhu[], int n);
string cekTren(const int suhu[], int n);
void tampilkanHasil(const int suhu[], int n, double rataRata, string tren);

int main() {
    int n;

    cout << "\n========================================" << endl;
    cout << "  PROGRAM REKAP DATA CUACA HARIAN" << endl;
    cout << "========================================" << endl;
    cout << "Analisis Suhu Harian dan Tren Temperatur" << endl;
    cout << "========================================\n" << endl;

    cout << "Masukkan jumlah hari: ";
    cin >> n;

    if (n <= 0) {
        cout << "\nERROR: Jumlah hari harus lebih dari 0!" << endl;
        cout << "\n========================================" << endl;
        cout << "PROGRAM SELESAI" << endl;
        cout << "========================================\n" << endl;
        return 1;
    }

    if (n > 1000) {
        cout << "\nERROR: Jumlah hari terlalu besar!" << endl;
        cout << "Maksimal 1000 hari" << endl;
        cout << "\n========================================" << endl;
        cout << "PROGRAM SELESAI" << endl;
        cout << "========================================\n" << endl;
        return 1;
    }

    int suhu[n];
    int suhuAsli[n];
    double rataRata;
    string tren;

    cout << "\n========================================" << endl;
    cout << "INPUT DATA SUHU" << endl;
    cout << "========================================" << endl;

    inputSuhu(suhu, n);

    for (int i = 0; i < n; i++) {
        suhuAsli[i] = suhu[i];
    }

    tren = cekTren(suhuAsli, n);
    bubbleSort(suhu, n);
    rataRata = hitungRataRata(suhu, n);
    tampilkanHasil(suhu, n, rataRata, tren);

    cout << "\n========================================" << endl;
    cout << "PROGRAM SELESAI" << endl;
    cout << "========================================\n" << endl;

    return 0;
}

void inputSuhu(int suhu[], int n) {
    cout << "Masukkan data suhu harian (dalam Celcius):" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Hari ke-" << (i + 1) << " : ";
        cin >> suhu[i];

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "ERROR: Input harus berupa angka!" << endl;
            i--;
            continue;
        }
    }
    cout << "\nData berhasil diinput!" << endl;
}

void bubbleSort(int suhu[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (suhu[j] > suhu[j + 1]) {
                temp = suhu[j];
                suhu[j] = suhu[j + 1];
                suhu[j + 1] = temp;
            }
        }
    }
    cout << "Data berhasil diurutkan!" << endl;
}

double hitungRataRata(const int suhu[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total = total + suhu[i];
    }
    return (double)total / n;
}

string cekTren(const int suhu[], int n) {
    int naik = 0;
    int turun = 0;

    for (int i = 0; i < n - 1; i++) {
        if (suhu[i] < suhu[i + 1]) {
            naik++;
        }
        else if (suhu[i] > suhu[i + 1]) {
            turun++;
        }
    }

    if (naik > turun) {
        return "NAIK";
    }
    else if (turun > naik) {
        return "TURUN";
    }
    else {
        return "STABIL";
    }
}

void tampilkanHasil(const int suhu[], int n, double rataRata, string tren) {
    cout << "\n========================================" << endl;
    cout << "       HASIL ANALISIS SUHU HARIAN" << endl;
    cout << "========================================" << endl;

    cout << "\nSUHU TERURUT (Rendah ke Tinggi):" << endl;
    cout << "----------------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Hari ke-" << setw(3) << (i + 1) << " : "
             << setw(4) << suhu[i] << " C" << endl;
    }

    cout << "\n----------------------------------------" << endl;
    cout << "STATISTIK:" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Jumlah Data    : " << n << " hari" << endl;
    cout << "Suhu Terendah  : " << suhu[0] << " C" << endl;
    cout << "Suhu Tertinggi : " << suhu[n - 1] << " C" << endl;
    cout << "Rata-rata Suhu : " << fixed << setprecision(2) << rataRata << " C" << endl;
    cout << "Tren Suhu      : " << tren << endl;
    cout << "========================================" << endl;
}
