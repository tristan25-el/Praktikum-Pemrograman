#include <iostream>
#include <vector>
#include <string>
using namespace std;
using pii = pair<string,int>;

void bersihkan(vector<pii>& v){
    for (int i = 0; i <v.size();i++) {
        if (v[i].second <= 0) {
            v.erase(v.begin()+ i);
            i--;
        }
    }
}

void hapusduplikat(vector<pii>& v) {
    for (int i=0;i<v.size();i++) {
        string nama = v[i].first;
        int harga = v[i].second;
        for (int j=i+1; j<v.size(); j++) {
            if (v[j].first ==nama) {
                harga = v[j].second;
                v.erase(v.begin() + j);
                j--;
            }
        }v[i].second = harga;
    }
}

void ringkasan(const vector<pii>& v) {
    if (v.empty()) {
        cout << "Tidak ada";
        return;
    }

    int Min=v[0].second;
    int Max=v[0].second;
    int total=0;

    for (int i=0; i<v.size(); i++) {
        int harga = v[i].second;
        if (harga<Min){
            Min = harga;
        }
        if (harga >Max) {
            Max=harga;
        }
        total+=harga;
    }

    double rata=(double)total/v.size();

    cout << "Jumlah barang unik: " << v.size() << endl;
    cout << "Harga minimum: " << Min << endl;
    cout << "Harga maksimum: " << Max << endl;
    cout << "Harga rata-rata: " << rata << endl;
}

 int main(){
    vector<pii>data={{"apel",2000},{"jeruk",1500},{"apel",-100},
                    {"mangga",3000},{"jeruk",1500},{"pisang",0},
                    {"apel",2500},{"mangga",3000}};
    bersihkan(data);
    hapusduplikat(data);
    ringkasan(data);
    return 0;
 }
