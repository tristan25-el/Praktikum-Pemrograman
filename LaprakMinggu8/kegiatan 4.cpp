#include<iostream>
using namespace std;

int pangkatRekursif(int x, int y) {
	if (y==0)return 1;
    return x*pangkatRekursif(x, y-1);
}

int main() {
    int b,c;
    cout << "Masukkan angka untuk basis: ";
    cin >> b;
    cout << "Masukkan angka untuk pangkat: ";
	cin>> c;
    cout <<b << " pangkat "<<c<< " adalah " << pangkatRekursif(b,c) << endl;
    return 0;
}
