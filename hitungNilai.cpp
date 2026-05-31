#include <iostream>
using namespace std;
struct Mahasiswa{
    string nama;
    string nim;
    int uts;
    int uas;
};
void inputData(Mahasiswa *data){

    cout<<"masukkan nama: ";
    getline(cin,data->nama);
    cout<<"masukkan NIM: ";
    getline(cin,data->nim);
    cout<<"masukkan uts: ";
    cin>>data->uts;
    cout<<"masukkan uas: ";
    cin>>data->uas;
    cin.ignore();
}
void tampilData(Mahasiswa *data){
    cout<<"Nama: "<<data->nama<<endl;
    cout<<"NIM: "<<data->nim<<endl;
    cout<<"uts: "<<data->uts<<endl;
    cout<<"uas: "<<data->uas<<endl;
    
}
void tampilNilai(Mahasiswa *data){
    double nilaiAkhir=0.4*data->uts + 0.6*data->uas;
    cout<<"Nilai Akhir: "<<nilaiAkhir<<endl;
}
int main(){
    int jumlah;
    cout<<"masukkan jumlah mahasiswa: ";
    cin>>jumlah;
    cin.ignore();
    Mahasiswa data[jumlah];
    for(int i=0;i<jumlah;i++){
        cout<<"input data ke-"<<i+1<<endl;
        inputData(&data[i]);
    }
    for(int i=0;i<jumlah;i++){
    tampilData(&data[i]);
    tampilNilai(&data[i]);
    }

}