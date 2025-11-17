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
			if (data[j] > data[j - 1]) { 
				swap(data[j], data[j - 1]); 
			} 
		} 
	}  
} 

int main (){
	int n;

	
	cin>>n;
	int data[n];
	
	for(int i=0;i<n;i++){
		cin>>data[i];
	}
	
	bubble_sort(data,n);
	
	for(int i=0;i<n;i++){
		cout<<data[i];
		if(i<n-1) cout<<",";
	}
	return 0;
}
