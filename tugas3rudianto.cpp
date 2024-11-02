#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int MaxBrg = 50;            
    string NamaBrg[MaxBrg];             
    int HargaUnit[MaxBrg];
    int JumlahJual[MaxBrg];
    float Total[MaxBrg];
    int JumlahBrg = 0;              
    char Lagi;                      

    do {
        cout << setprecision(12);
        cout << "Nama Barang - " << JumlahBrg + 1 << ": ";
        cin >> NamaBrg[JumlahBrg];

        cout << "Harga Perbarang " << NamaBrg[JumlahBrg]<< ": ";
        cin >> HargaUnit[JumlahBrg];

        cout << "Jumlah Barang Terjual " << NamaBrg[JumlahBrg]<< ": ";
        cin >> JumlahJual[JumlahBrg];

        Total[JumlahBrg] = HargaUnit[JumlahBrg] * JumlahJual[JumlahBrg];
        JumlahBrg++;

        cout << "Apakah ingin memasukan data penjualan lagi? (y/n): ";
        cin >> Lagi;
        
    } while (Lagi == 'y' || Lagi == 'Y');

    cout << endl << "------------------------------------------------------------------------------------------" << endl; 
    cout << "  No   Nama Barang          Harga PerBarang     Jumlah Terjual       Total Pendapatan    " << endl;
    cout << "------------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < JumlahBrg; i++) {
        cout << setw(4) << right << i + 1 << "   "
             << setw(15) << left << NamaBrg[i]
             << setw(15) << right << HargaUnit[i]
             << setw(18) << right << JumlahJual[i]
             << setw(26) << right << Total[i] << endl;
    }
    cout << "------------------------------------------------------------------------------------------" << endl;
    return 0;
}