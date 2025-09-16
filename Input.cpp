#include <iostream>
#include <string>
using namespace std;

int main (){

	int angka;
	float desimal;
	char karakter;

	cout<<"Masukkan sebuah angka: ";
	cin>>angka;
	cout<<"Masukkan sebuah angka desimal: ";
	cin>>desimal;
	cout<<"Masukkan sebuah karakter: ";
	cin>>karakter;

	cout<<"Angka yang Anda masukkan: "<< angka<< endl;
	cout<<"Desimal yang Anda masukkan: "<< desimal<< endl;
	cout<<"Karakter yang Anda masukkan: "<<karakter<< endl;

	int bilangan1,bilangan2;
	cout<< "Masukkan dua bilangan(pisah dengan spasi): ";
	cin>>bilangan1>>bilangan2;

	cout<<"Bilangan pertama: "<<bilangan1<<endl;
	cout<<"Bilangan kedua: "<<bilangan2<<endl;

	string kalimat;
	cin.ignore();
	cout<<"Masukkan sebuah kalimat: ";
	getline(cin,kalimat);
	cout<<"kalimat yang anda masukkan: "<< kalimat<<endl;

	return 0;
}


