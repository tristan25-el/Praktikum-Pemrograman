#include <iostream>
using namespace std;

void tukarVal (int a,int b) {
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void tukarRef(int&a ,int &b) {
    int temp;
	temp=a;
	a=b;
	b=temp;
}

int main (){
	int x,y;

	cout<<"Masukkan bilangan pertama :";
	cin>>x;
	cout<<"Masukkan bilangan kedua : ";
	cin>>y;

	cout<<"sebelum ditukar : a = "<<x<<", b= "<<y<<endl;
	tukarVal(x,y);
	cout<<"setelah ditukar Byvalue : a = "<<x<<", b= "<<y<<endl;
	tukarRef(x,y);
	cout<<"setelah ditukar ByReference : a = "<<x<<", b= "<<y<<endl;

	return 0;
}
