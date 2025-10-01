#include<iostream>

using namespace std;
int main(){

	int a=1,b=0,temp,n;
	cout<<"Masukkan bilangan ke-n : ";
	cin>>n;

	if(n==0){
        cout<<b;
	}else if(n==1){
        cout<<a;
	}else{
        for(int i = 2; i<=n ; i++){
            temp=a+b;
            b=a;
            a=temp;
        }
        cout<<"Nilai y untuk bilangan ke "<<n<<" adalah "<<temp;
	}
	return 0;


}
