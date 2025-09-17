#include <iostream>
using namespace std;

int main (){
    int a=10,b=3;

	cout<<"Penjumlahan:a+b= "<<(a+b)<<endl;
	cout<<"Pengurangan:a-b= "<<(a-b)<<endl;
	cout<<"Perkalian:a*b= "<<(a*b)<<endl;
	cout<<"Pembagian:a/b= "<<(a/b)<<endl;
	cout<<"Modulus:a%b= "<<(a%b)<<endl;
    cout<<endl;

    std::cout << "a == b : " << (a == b) << std::endl;
    std::cout << "a != b : " << (a != b) << std::endl;
    std::cout << "a > b : " << (a > b) << std::endl;
    std::cout << "a < b : " << (a < b) << std::endl;
    std::cout << "a >= b : " << (a >= b) << std::endl;
    std::cout << "a <= b : " << (a <= b) << std::endl;
    cout<<endl;


	bool hasil;

	hasil=(10>5) && (5<10);
	cout<< "10>5 AND 5<10 : "<<hasil<<endl;
	hasil=(10>5) || (5<10);
	cout<< "10>5 or 5<10 : "<<hasil<<endl;
	hasil=!(10>5);
	cout<< "NOT 10>5: "<<hasil<<endl;
    cout<<endl;

    a += 5;
    std::cout << "a += 5 : " << a << std::endl;
    a -= 3;
    std::cout << "a -= 3 : " << a << std::endl;
    a *= 2;
    std::cout << "a *= 2 : " << a << std::endl;
    a /= 4;
    std::cout << "a /= 4 : " << a << std::endl;
    a %= 3;
    std::cout << "a %= 3 : " << a << std::endl;

	return 0;
}

