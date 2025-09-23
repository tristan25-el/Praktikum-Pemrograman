#include <iostream>
using namespace std;

int main (){

	int a;
	cout<<"Masukkan angka(0 sampai 100): ";
	cin>>a;

	if(a>100 || a<0){
        cout<<"masukkan antara 0 sampai 100";
	}else if(a>=80){
		cout<<"A";
	}else if(a>=60){
		cout<<"B";
	}else if(a>=40){
		cout<<"C";
	}else if(a>=20){
		cout<<"D";
	}else{
		cout<<"E";
	}

	return 0;
}
