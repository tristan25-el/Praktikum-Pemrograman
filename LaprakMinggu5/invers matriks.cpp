#include <iostream>
using namespace std;

int main() {
    float matriks[3][3], adj[3][3], invers[3][3];
    float determinan = 0;

    cout << "Masukkan elemen matriks 3x3: "<<endl;
    for(int i = 0;i<3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "matriks[" <<i+1<< "][" <<j+1<< "] = ";
            cin >> matriks[i][j];
        }
    }


    for(int i=0 ;i<3; i++) {
        determinan += matriks[0][i]*(matriks[1][(i+1)%3]*matriks[2][(i+2)%3]-matriks[1][(i+2)%3]*matriks[2][(i+1)%3]);
    }

    if(determinan == 0) {
        cout << "Matriks tidak memiliki invers " << endl;
        return 0;
    }


    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            adj[j][i]=((matriks[(i+1)%3][(j+1)%3] * matriks[(i+2)%3][(j+2)%3]) -
                        (matriks[(i+1)%3][(j+2)%3] * matriks[(i+2)%3][(j+1)%3]));
        }
    }


    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            invers[i][j] = adj[i][j] / determinan;
        }
    }


    cout<<"Invers matriks adalah: "<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << invers[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
