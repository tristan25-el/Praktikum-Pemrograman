#include<iostream>
#include<fstream>
using namespace std;

void bacadata (int *a , const char* data) {
	int i=0;
	ifstream file(data);
	while(file >> a[i]){
		i++;
	}
	file.close();
}

int maksimumRekursif(int *arr, int n) {
    if (n == 1) return arr[0];
    int maxSubarray = maksimumRekursif(arr, n - 1);
    if (arr[n - 1] > maxSubarray) return arr[n-1];
    if (!(arr[n - 1] > maxSubarray)) return maxSubarray;
}

int main() {

    int n;
    cout<<"Berapa angka yang ingin ditinjau : ";
    cin>>n;
    int arr[n];
    int p = sizeof(arr) / sizeof(arr[0]);
    bacadata(arr,"angkainput.txt");

    cout << "Nilai maksimum dalam array: " << maksimumRekursif(arr,p) << endl;
    return 0;
}
