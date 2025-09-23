#include <iostream>
using  namespace std;

int main(){

	int a,b,c;

	cout<<"Masukkan bilangan pertama :";
	cin>>a;
	cout<<"Masukkan operator (1:+, 2:-, 3:*, 4:/) : ";
	cin>>b;
	cout<<"Masukkan bilangan kedua :";
	cin>>c;

	switch(b){
		case 1:
			cout<<a+c;
			break;
		case 2:
			cout<<a-c;
			break;
		case 3:
			cout<<a*c;
			break;
		case 4:
		    if(c==0)
                cout<<"tidak terdefinisi";
            else{
                cout<<a/c;
            }
			break;
		default:
			cout<<"input tidak valid";

	}
	return 0;
}
