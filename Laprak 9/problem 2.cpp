#include <iostream>

using namespace std;

void swap(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void bubble_sort1(int data[], int s) {

	for (int i = 0; i < s - 1; i++) {
		for (int j = s - 1; j > i; j--) {
			if (data[j] < data[j - 1]) {
				swap(data[j], data[j - 1]);
			}
		}
	}
}

void bubble_sort2(int data[], int s) {

	for (int i = 0; i < s - 1; i++) {
		for (int j = s - 1; j > i; j--) {
			if (data[j] > data[j - 1]) {
				swap(data[j], data[j - 1]);
			}
		}
	}
}

int main (){
	int n,gen=0,gan=0;


	cin>>n;
	int data[n];

	for(int i=0; i<n;i++){
		cin>>data[i];
	}

	for(int i=0;i<n;i++){
		if(data[i]%2==0){
			gen++;
		}
	}

	gan=n-gen;

	int ganjil[gan];
	int genap[gen];

	int j=0,k=0;

	for(int i=0;i<n;i++){
		if(data[i]%2==0){
			genap[j]=data[i];
			j++;
		}else{
			ganjil[k]=data[i];
			k++;
		}
	}

	bubble_sort1(genap,gen);
	bubble_sort2(ganjil,gan);

	for(int m=0;m<gan;m++){
		cout<<ganjil[m];
		if(m<gan) cout<<",";
	}

	for(int p=0;p<gen;p++){
		cout<<genap[p];
		if(p<gen) cout<<",";
	}
	return 0;
}
