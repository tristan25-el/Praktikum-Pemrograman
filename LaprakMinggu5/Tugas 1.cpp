#include <iostream>
using namespace std;

int sum( int a[], int n){
	int hasil=0;
	for(int i=0; i<n;i++){
		hasil+=a[i];
	}
	return hasil;
}

int minVal( int a[], int n){
	int mx=a[0];
	for (int i = 1; i < n; i++){
		if (a[i] < mx){
			mx = a[i];
		}
	}
	return mx;
}

int maxVal( int a[], int n){
	int mx=0;
	for (int i = 1; i < n; i++){
		if (a[i] > mx){
			mx = a[i];
		}
	}
	return mx;
}

double mean( int a[], int n){
	int hasil=0;
	for(int i=0; i<n;i++){
		hasil+=a[i];
	}
	return hasil/n;
}

int main(){

    int data[5]={1,2,3,4,5};

	cout<<"Jumlah data= "<<sum(data,5)<<endl;
	cout<<"Nilai Min data= "<<minVal(data,5)<<endl;
	cout<<"Nilai Max data= "<<maxVal(data,5)<<endl;
	cout<<"Rata rata data= "<<mean(data,5)<<endl;

}
