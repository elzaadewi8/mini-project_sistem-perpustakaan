#include<iostream>
#include<stdlib.h>
using namespace std;

struct Buku{
    string namaBuku;
    int jumlahBuku;
};

bool Status(int stok, int peminjaman){
    if (stok>0 && peminjaman<=7){
        return true;
    }else {
        return false;
    }
}

int main(){
    Buku buku;
    string daftarBuku[3] = {"Buku A", "Buku B", "Buku C"};
    int pilihan=0;
    char ulangMenu;

do {
    cout << "=====DAFTAR BUKU=====\n";
    cout << "1. " << daftarBuku[0] << endl;
    cout << "2. " << daftarBuku[1] << endl;
    cout << "3. " << daftarBuku[2] << endl;
    cout << "Pilih Buku (1-3) = ";
    cin >> pilihan;

    switch (pilihan){
    case 1:
        cout << "\n=====INFO BUKU=====\n";
        buku.namaBuku="Buku Anjay";
        buku.jumlahBuku=10;
        cout << "Nama Buku \t= " << buku.namaBuku << endl;
        cout << "Jumlah buku \t= " << buku.jumlahBuku << endl;
        break;
    case 2:
        cout << "\n=====INFO BUKU=====\n";
        buku.namaBuku="Buku Bebek";
        buku.jumlahBuku=20;
        cout << "Nama Buku \t= " << buku.namaBuku << endl;
        cout << "Jumlah buku \t= " << buku.jumlahBuku << endl;
        break;
    case 3:
        cout << "\n=====INFO BUKU=====\n";
        buku.namaBuku="Buku Cicak";
        buku.jumlahBuku=15;
        cout << "Nama Buku \t= " << buku.namaBuku << endl;
        cout << "Jumlah buku \t= " << buku.jumlahBuku << endl;
        break;
    default:
        cout << "\n=====INFO BUKU=====\n";
        cout << "Buku tidak tersedia!!\n";
        break;
    }

int peminjaman, stok, totalBuku;
    cout << "\n=====INFO PEMINJAMAN=====\n";
    cout << "Pinjam berapa hari = ";
    cin >> peminjaman;
    cout << "Pinjam berapa buku = ";
    cin >> totalBuku;
stok=buku.jumlahBuku-totalBuku;
    cout << "Stok buku tinggal = " << stok << endl;

if (Status(stok, peminjaman)){
    cout << "\n=====STATUS PEMINJAMAN=====\n";
    cout << "Boleh pinjam\n";
} else {
    cout << "\n=====STATUS PEMINJAMAN=====\n";
    cout << "Tidak boleh pinjam\n";
}

if (pilihan!=3) {
    cout << "\nKembali ke menu? (y/n): ";
    cin >> ulangMenu;
system("cls");
}

    } while (ulangMenu== 'y' || ulangMenu== 'Y');
}
