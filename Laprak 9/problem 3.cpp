#include <iostream>

using namespace std;

void swap(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void bubble_sort(int data[], int s,int L,int R) {

	for (int i = L; i <(R-L)+1; i++) {
		for (int j = (R-L)+1 ; j > i; j--) {
			if (data[j] < data[j - 1]) {
				swap(data[j], data[j - 1]);
			}
		}
	}
}

int main (){
	int n,L,R;


	cin>>n>>L>>R;

	int data[n];
	;

	for(int i=0;i<n;i++){
		cin>>data[i];
	}


	bubble_sort(data,n,L,R);

	for(int i=0;i<n;i++){
		cout<<data[i];
		if(i<n-1) cout<<",";
	}
	return 0;
}
