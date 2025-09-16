#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	int a=10,b=20;
	float c=3.14;

	cout<<"Nilai a: "<<a<<",Nilai b: "<<b<<",Nilai c: "<<c<<endl;

	cout<<"Nilai a: "<<a;
	cout<<"Nilai b: "<<b<<endl;
	cout<<"Nilai c: "<<c<<endl;

	cout<<"Nilai a: "<<a;
	cout<<"Nilai b: "<<b;
	cout<<"Nilai c: "<<c<<endl;

	cout<<"Tabel Penjualan"<<endl;
	cout<<"----------------------"<<endl;
	cout<<"Bulan"<<setw(15)<<"Penjualan"<<endl;
	cout<<"----------------------"<<endl;
	cout<<"Januari"<<setw(15)<<"10000"<<endl;
	cout<<"Februari"<<setw(15)<<"200000"<<endl;
	cout<<"Maret"<<setw(18)<<"500000"<<endl;
	cout<<"April"<<setw(15)<<"0"<<endl;
	cout<<"----------------------"<<endl;



	return 0;
}

