#include <iostream>
using namespace std;

int main (){
	
	int a;
	cout<<"Masukkan angka: ";
	cin>>a;
	
	if(a<1){
		cout<<"Bukan prima";
	}else if(a%2==0 && a!=2){
		cout<<"Bukan prima";
	}else if(a%3==0 && a!=3){
		cout<<"Bukan prima";
	}else if(a%5==0 && a!=5){
		cout<<"Bukan prima";
	}else if(a%7==0 && a!=7){
		cout<<"Bukan prima";
	}else{
		cout<<a<<" Prima";
	}
	
	return 0;
}
