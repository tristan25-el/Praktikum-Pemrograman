#include <iostream>

using namespace std;

void swap(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void bubble_sort(int data[], int s) {

	for (int i = 0; i < s - 1; i++) {
		for (int j = s - 1; j > i; j--) {
			if (data[j] < data[j - 1]) {
				swap(data[j], data[j - 1]);
			}
		}
	}
}

int main (){
	int n;
	float m;


	cin>>n;
	int data[n];

	for(int i=0;i<n;i++){
		cin>>data[i];
	}

	bubble_sort(data,n);

	if(n%2==1){
		m=data[n/2];
	}else{
		m= (data[(n/2)]+ data[(n/2-1)])/2.0;
	}

	for(int i=0;i<n;i++){
		cout<<data[i];
		if(i<n-1) cout<<",";
	}
	cout<<endl;
	cout<<"median :"<<m;
	return 0;
}
