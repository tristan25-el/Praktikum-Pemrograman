#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>
using namespace std;

struct lubang {
    bool bomb;
    bool terbuka;
    bool bendera;
    int area;
};

int x,y,BOM;
lubang** arena;

// Membuat array 2D
lubang** buatArena(int x, int y) {
    lubang** b = new lubang*[x];
    for (int i=0;i<x; i++) {
        b[i] = new lubang[y];
        for (int j = 0; j < y; j++) {
            b[i][j].bomb = false;
            b[i][j].terbuka = false;
            b[i][j].bendera = false;
            b[i][j].area = 0;
        }
    }
    return b;
}

// Hitung bom sekitar
int hitungArea(int b, int k){
    int hitung=0;
    for (int i=b-1; i<=b+1; i++) {
        for (int j=k-1; j <= k+1; j++) {
            if (i<0 || j<0 || i>=x || j>=y){continue;}
            if (arena[i][j].bomb){hitung++;}
        }
    }
    return hitung;
}

//  buat bom,skip area input pertama
void letakBom(int amanB, int amanK) {
    int tanam = 0;
    while (tanam < BOM){
        int b = rand()% x;
        int k = rand()% y;

        // Jangan bom di area klik pertama
        if (abs(b - amanB) <= 1 && abs(k - amanK) <= 1)
            continue;

        if (!arena[b][k].bomb) {
            arena[b][k].bomb = true;
            tanam++;
        }
    }

    // Hitung bom
    for (int i=0; i<x; i++){
        for (int j=0; j<y; j++){
            if (!arena[i][j].bomb){
                arena[i][j].area = hitungArea(i, j);
            }
        }
    }
}

//  Rekursi: membuka area kosong
void bukaArena(int b, int k) {
    if (b<0 || k<0 || b>= x || k>= y){return;}
    if (arena[b][k].terbuka){return;}
    if (arena[b][k].bendera){return;}
    if (arena[b][k].bomb){return;}

    arena[b][k].terbuka=true;

    if (arena[b][k].area > 0){return;}

    for (int i =b-1; i <= b+1; i++){
        for (int j = k-1; j<= k+1; j++){
            bukaArena(i,j);
        }
    }
}

// Tampilkan arena
void tampilkanArena(bool tampilkanBom = false) {
    cout <<endl<<"      ";

    // Header kolom
    for (int j=0; j<y; j++){
        cout << setw(3) << j << " ";
    }
    cout << endl<<"    ";

    // Garis pembatas
    for (int j=0; j < y*4 + 2; j++){
        cout << "-";
    }
    cout <<endl;

    // Baris arena
    for (int i=0;i<x;i++){

        cout << setw(3) <<i<< " | ";

        for (int j=0; j<y; j++) {

            if (tampilkanBom && arena[i][j].bomb){
                cout << setw(3) << "B" << " ";
            }else if (arena[i][j].bendera){
                cout << setw(3) << "F" << " ";
            }else if (!arena[i][j].terbuka){
                cout << setw(3) << "#" << " ";
            }else if (arena[i][j].area > 0){
                cout << setw(3) << arena[i][j].area << " ";
            }else{
                cout << setw(3) << "." << " ";
            }
        }

        cout <<endl;
    }

    cout <<endl;
}


// pembebasan memory
void bebas() {
    for (int i=0; i<x; i++) delete[] arena[i];
    delete[] arena;
}


int main() {
    srand(time(0));

    //  Baca file level
    ifstream file("Level.txt");
    if (!file) {
        cout << "File Level.txt tidak ditemukan"<<endl;
        return 1;
    }

    string line;
    while (getline(file, line)) cout << line << endl;
    file.close();

    cout <<endl<<"Pilih level (1/2/3): ";
    int n;
    cin >> n;

    if (n == 1) { x = y = 8;  BOM = 10; }
    else if (n == 2) { x = y = 15; BOM = 40; }
    else if (n == 3) { x = y = 20; BOM = 80; }
    else {cout << "Level tidak valid"<<endl; return 1; }

    arena= buatArena(x,y);

    // input pertama
    tampilkanArena();
    cout <<endl<<"Input pertama (baris kolom): ";
    int b,k;
    //Cek batas koordinat
    while (true) {
        cin >> b >> k;
        if (b >= 0 && b < x && k >= 0 && k < y){break;}
        cout << "Koordinat di luar batas Masukkan lagi: ";
    }

    letakBom(b,k);
    bukaArena(b,k);

    // Looping
    while (true) {
        tampilkanArena();

        cout <<endl<< "Aksi (B = buka, F = flag): ";
        char p;
        cin >> p;
        cin >> b >> k;

        // Cek batas koordinat
        if (b < 0 || b >= x || k < 0 || k >= y) {
            cout << "Koordinat di luar batas! Coba lagi"<<endl;
            continue;
        }

        // Bendera
        if (p == 'F' || p == 'f') {
            if (arena[b][k].terbuka) {
                cout << "Tidak bisa bendera kotak yang sudah terbuka"<<endl;
                continue;
            }

            arena[b][k].bendera=!arena[b][k].bendera;
            continue;
        }

        // BUKA
        if (arena[b][k].bendera){
            cout << "Lepas flag dulu untuk membuka kotak"<<endl;
            continue;
        }

        if (arena[b][k].bomb){
            cout <<endl<< "GAME OVER!"<<endl;
            tampilkanArena(true);
            break;
        }

        bukaArena(b,k);

        //CEK MENANG
        int  tutup = 0;
        for (int i = 0; i< x; i++){
            for (int j = 0; j< y; j++){
                if (!arena[i][j].terbuka && !arena[i][j].bomb){tutup++;}
            }
        }
        if (tutup == 0) {
            cout <<endl<<"SELAMAT! Anda menang"<<endl;
            tampilkanArena(true);
            break;
        }
    }

    bebas();
    return 0;
}
