#include<iostream> 
#include<fstream> 
using namespace std; 
int main(){ 
	int data,n;
	cout<<"Berapa kali diulangi: ";
	cin>>n; 

	ifstream file("data_inputR.txt"); 
	 
	cout<<"File sukses dibuka!"<<endl; 
 
	for(int i=0; i<n ; i++){ 
		file>>data; 
		cout<<data<<endl; 
	} 
 
	file.close(); 
	return 0; 
	 
	
} 
