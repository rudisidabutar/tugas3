#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int MaxBrg = 50;            
    string NamaBrg;             
    int HargaUnit;
    int JumlahJual;
    float Total;
    int JumlahBrg = 0;              
    char Lagi;                      

    do {
        cout << setprecision(12);
        cout << "Nama Barang - " << JumlahBrg + 1 << ": ";
        cin >> NamaBrg;

        cout << "Harga Perbarang " << NamaBrg<< ": ";
        cin >> HargaUnit;

        cout << "Jumlah Barang Terjual " << NamaBrg<< ": ";
        cin >> JumlahJual;

        Total = HargaUnit * JumlahJual;
        JumlahBrg++;

        cout << "Apakah ingin memasukan data penjualan lagi? (y/n): ";
        cin >> Lagi;
        
    } while (Lagi == 'y' || Lagi == 'Y');

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
