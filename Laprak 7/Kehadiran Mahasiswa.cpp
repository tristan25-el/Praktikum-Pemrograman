#include <iostream>
using namespace std;

int totalHadir=0;

int totalhadir (int*a,int b) {
	for(int i=0;i<b;i++){
		totalHadir += a[i];
	}
	return totalHadir;
}

double rasio (int f,int c ,int d) {
	double k=c*d;
	return f/k*100;
	;
}

void menampilkan (int j ,double k,int c,int d ) {
	cout<<"Total kehadiran kelas "<< j << " dari "<< c*d <<endl;
	cout<<"Persentase kehadiran : "<< k <<"%"<<endl;
}

int main (){
	int n,m,p,q;

	cout<<"Masukkan Jumlah Mahasiswa : ";
	cin>>n;
	cout<<"Masukkan Jumlah Pertemuan : ";
	cin>>m;

	int siswa[n];
	for(int i=0; i<n;i++){
		cout<<"Kehadiran mahasiswa ke-"<<i+1<<": ";
		cin>>siswa[i];
	}

    p=totalhadir(siswa,n);
	q=rasio(totalHadir,n,m);
	menampilkan(p,q,n,m);

	return 0;
}
