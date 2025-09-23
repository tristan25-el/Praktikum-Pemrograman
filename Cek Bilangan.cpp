#include <iostream>
using namespace std;

int main (){

	int a;
	cout<<"Masukkan angka: ";
	cin>>a;

	if(a==0){
		cout<<a<<" adalah 0";
	}else if(a>1){
		if(a%2==0){
			cout<<a<<" Genap positif";
		}else{
			cout<<a<<" Ganjil Positif";
		}
	}else {
		if(a%2==0){
			cout<<a<<" Genap negatif";
		}else if(a%2==1){
			cout<<a<<" Ganjil negatif";
		}
	}



	return 0;
}
