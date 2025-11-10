#include <iostream>
#include <iomanip>
using namespace std;

void inputSuhu(double suhu[], int n);
void bubbleSort(double suhu[], int n);
double hitungRataRata(const double suhu[], int n);
string cekTren(const double suhu[], int n);
void tampilkanHasil(const double suhuAsli[], const double suhuUrut[], int n, double rataRata, string tren);

int main() {
    const int N = 7;
    double suhu[N], suhuUrut[N];

    cout << "=== Program Analisis Tren Suhu Mingguan ===" << endl;
    cout << "Masukkan suhu harian selama " << N << " hari (dalam Celcius)" << endl;

    inputSuhu(suhu, N);

    for (int i = 0; i < N; i++) {
        suhuUrut[i] = suhu[i];
    }

    bubbleSort(suhuUrut, N);
    double rataRata = hitungRataRata(suhu, N);
    string tren = cekTren(suhu, N);

    tampilkanHasil(suhu, suhuUrut, N, rataRata, tren);

    return 0;
}


void inputSuhu(double suhu[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Hari ke-" << i + 1 << " : ";
        cin >> suhu[i];
    }
}

void bubbleSort(double suhu[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (suhu[j] > suhu[j + 1]) {
                double temp = suhu[j];
                suhu[j] = suhu[j + 1];
                suhu[j + 1] = temp;
            }
        }
    }
}

double hitungRataRata(const double suhu[], int n) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += suhu[i];
    }
    return total / n;
}

string cekTren(const double suhu[], int n) {
    int naik = 0, turun = 0, sama = 0;

    for (int i = 0; i < n - 1; i++) {
        if (suhu[i + 1] > suhu[i]) naik++;
        else if (suhu[i + 1] < suhu[i]) turun++;
        else sama++;
    }

    if (naik > turun && naik > sama)
        return "Naik";
    else if (turun > naik && turun > sama)
        return "Turun";
    else
        return "Stabil";
}

void tampilkanHasil(const double suhuAsli[], const double suhuUrut[], int n, double rataRata, string tren) {
    cout << "\n===== HASIL ANALISIS =====\n";

    cout << "Data suhu urut (kecil ke besar): ";
    for (int i = 0; i < n; i++) {
        cout << suhuUrut[i] << " ";
    }

    cout << fixed << setprecision(2);
    cout << "\nRata-rata suhu: " << rataRata << " °C" << endl;
    cout << "Tren suhu mingguan: " << tren << endl;

    cout << "\nData suhu asli: ";
    for (int i = 0; i < n; i++) {
        cout << suhuAsli[i] << " ";
    }
    cout << endl;
}
