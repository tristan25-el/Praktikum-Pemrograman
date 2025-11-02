#include <iostream>
using namespace std;

double ratarata(int *a,int b){
    double jumlah=0;
    for(int i=0;i<b;i++){
        jumlah+=a[i];
    }
    return jumlah/b;
}

string kriteria (double c){
    if(c>=70){
        return "LULUS";
    }else{
        return "TIDAK LULUS";
    }

}
int main(){
    int n;
    cout<<"Masukkan jumlah nilai:";
    cin>>n;

    int nilai[n];
    for(int i=0;i<n;i++){
        cout<<"Nilai ke-"<<i+1<<":";
        cin>>nilai[i];
    }

    cout<<"Rata-rata:"<<ratarata(nilai,n)<<endl;
    cout<<"Status : "<<kriteria(ratarata(nilai,n));

    return 0;
}
