#include <iostream>
using namespace std;

int main (){

	int n, m;
	cout<<"Masukkan jumlah baris: ";
	cin >> n;
	cout<<"Masukkan jumlah kolom : ";
	cin >> m;
	int matriks[n][m];
	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"Masukkan elemen ke "<<"["<<i+1<<"]["<<j+1<<"] = ";
			cin>>matriks[i][j];
		}
	}
	for (int i=0;i<n;i++) {
		int s=0;
		for(int j=0;j<m;j++){
			s=s+matriks[i][j];
		}cout<<"Jumlah baris ke "<<i+1<<"= "<<s<<"\n";
 	}
	return 0;
}
