#include <iostream>
using namespace std;

int main (){

	int n;
	cout<<"Berapa Angka: ";
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++){
		cout<<"Angka ke-"<<i+1<<"= ";
		cin >> arr[i];
	}
	int mx = arr[0];
	for (int j = 1; j < n; j++){

		if (arr[j] > mx){

			mx = arr[j];
		}
	}
	cout <<"Nilai Max adalah "<< mx << "\n";
	return 0;
}
