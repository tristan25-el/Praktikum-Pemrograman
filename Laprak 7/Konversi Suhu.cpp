#include <iostream>
#include<iomanip>
using namespace std;

double CelsiusFahrenheit (double c) {
    return (9*c/5)+32;
}

double CelciusKelvin(double c) {
    return 273.15+c;
}

int main() {
	int n;
    cout << "Masukkan jumlah data suhu : ";
    cin>>n;
    double suhu[n];
    for(int i=0; i<n ;i++){
    	cout<<"Masukkkan suhu(celcius) ke-"<< i+1<<": ";
    	cin>>suhu[i];
	}

    cout<<"konversi :"<<endl;
    cout<<setw(10)<<"celsius"<<setw(15)<<"fahrenheit"<<setw(12)<<"kelvin"<<endl;
    cout<<"------------------------------------------------"<<endl;
    for(int i=0; i<n ;i++){
    	cout<<setw(10)<<suhu[i]<<setw(15)<<CelsiusFahrenheit(suhu[i])<<setw(12)<<CelciusKelvin(suhu[i])<<endl;
	}

    return 0;
}
