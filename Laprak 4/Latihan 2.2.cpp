#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int data,n;

	ifstream file("data_input.txt");
		cout<<"File sukses dibuka!"<<endl;

	for(int i=0; i<7 ; i++){
		file>>data;
		cout<<data<<endl;
	}

	file.close();
	return 0;

}
