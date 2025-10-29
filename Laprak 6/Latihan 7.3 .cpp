#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

struct karyawan{
	string nama;
	int umur;
	string nik;
	string jabatan;
};

int main() {
	const int jumlahkaryawan = 100;
	karyawan kry[jumlahkaryawan];
	int count = 0;

	ifstream inputFile("karyawan.txt");
	if (!inputFile) {
		cerr << "Tidak dapat membuka file!" << endl;
		return 1;
	}

	string line;
	while (getline(inputFile, line) && count < jumlahkaryawan) {
	  stringstream ss(line);
	        ss >> kry[count].nama >> kry[count].umur >> kry[count].nik >> kry[count].jabatan;
	        count++;
	}


    inputFile.close();

    while(count<jumlahkaryawan){
    int p;

    cout<<"Yang Ingin dilakukan "<<endl;
    cout<<"1 Menambah Karyawan"<<endl;
    cout<<"2 Menghapus data Karyawan"<<endl;
    cout<<"3 Mengedit data Karyawan"<<endl;
    cout<<"4 Menampilkan Seluruh Karyawan"<<endl;
    cin>>p;


    if(p==1){
    	cout<<"Masukkan nama :";
    	cin>>kry[count].nama;
    	cout<<"Masukkan umur :";
    	cin>>kry[count].umur;
    	cout<<"Masukkan nik :";
    	cin>>kry[count].nik;
    	cout<<"Masukkan jabatan :";
    	cin>>kry[count].jabatan;
    	count++;


	}else if(p==2){
		string n;
		cout<<"masukkan nik karyawan yang ingin dihapus :";
		cin>>n;
		for(int i=0 ;i<=count;i++){
			if(n==kry[i].nik){
				for(int j=i;j<count;j++){
					kry[j]=kry[j+1];
				}
			count--;
			}
		}
	}else if(p==3){
		string n;
		cout<<"masukkan nik karyawan yang ingin diedit :";
		cin>>n;
		for(int i=0; i<=count;i++){
			if(n == kry[i].nik){
				cout<<"Masukkan nama :";
			   	cin>>kry[i].nama;
			    cout<<"Masukkan umur :";
			    cin>>kry[i].umur;
			    cout<<"Masukkan nik :";
			    cin>>kry[i].nik;
			    cout<<"Masukkan jabatan :";
			    cin>>kry[i].jabatan;
			}
		}

    } else{
    	cout<<endl;
	    cout << "Data karyawan:" << endl;
	    for (int i = 0; i < count; i++) {
	        cout << "karyawan " << i + 1 << ":" << endl;
	        cout << "Nama: " << kry[i].nama << endl;
	        cout << "Umur: " << kry[i].umur << endl;
	        cout << "NIK: " << kry[i].nik << endl;
	        cout << "Jabatan: " << kry[i].jabatan << endl;
	        cout << endl;
    	}
    	break;
	}
	}


    return 0;
}
