#include <iostream>
#include <string>
using namespace std;

int main (){
	
	string nama;
	int a;
	cout<<"Masukkan username: ";
	cin>>nama;
	cout<<"Masukkan pin: ";
	cin>>a;
	
	if(nama != "ugo"){
		cout<<"user tidak dikenal";
	}else if(nama == "ugo"){
		if(a>=0 && a<=9999)
		cout<<"Akses diterima";
	}else{
		cout<<"Pin invalid";
	}
	
		
	return 0;
}
