#include <iostream>
#include <string>
using namespace std;

void inputSuhu(int suhu[], int n);
void bubbleSort(int suhu[], int n);
double hitungRataRata(const int suhu[], int n);
string cekTren(const int suhu[], int n);
void tampilkanHasil(const int suhu[], int n, double rataRata, string tren);

int main() {
    int n;

    cout << "\nPROGRAM REKAP DATA CUACA HARIAN" << endl;
    cout << "================================" << endl;

    cout << "Masukkan jumlah hari: ";
    cin >> n;

    int suhu[n];
    int suhuAsli[n];
    double rataRata;
    string tren;

    inputSuhu(suhu, n);

    for (int i = 0; i < n; i++) {
        suhuAsli[i] = suhu[i];
    }

    tren = cekTren(suhuAsli, n);
    bubbleSort(suhu, n);
    rataRata = hitungRataRata(suhu, n);
    tampilkanHasil(suhu, n, rataRata, tren);

    return 0;
}

void inputSuhu(int suhu[], int n) {
    cout << "\nMasukkan data suhu:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Hari " << (i + 1) << ": ";
        cin >> suhu[i];
    }
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
    cout << "\n=== HASIL ANALISIS ===" << endl;

    cout << "\nSuhu Terurut:" << endl;
    for (int i = 0; i < n; i++) {
        cout << suhu[i] << " ";
    }

    cout << "\n\nRata-rata: " << rataRata << " C" << endl;
    cout << "Tren: " << tren << endl;
}
