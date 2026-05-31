#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
struct Siswa{
    string nama;
    int nilai;
};
void inputData(Siswa *data){
    cout<<"Masukkan nama siswa: ";
    getline(cin,data->nama);
    cout<<"Masukkan nilai siswa: ";
    cin>>data->nilai;
    cin.ignore();
}
int cariMaks(Siswa data[],int jumlah){
    int maks=0;
    for(int i=0;i<jumlah;i++){
        if(data[i].nilai>data[maks].nilai){
            maks=i;
        }
    }return maks;
}
int cariMin(Siswa data[],int jumlah){
    int minn=0;
    for(int i=0;i<jumlah;i++){
        if(data[i].nilai<data[minn].nilai){
            minn=i;
        }
    }return minn;
}
double hitungRata(Siswa data[],int jumlah){
    int sum=0;
    for(int i=0;i<jumlah;i++){
        sum+=data[i].nilai;
    }
    double ratarata=sum/jumlah;
    return ratarata;
}
void tampilrata(Siswa *data,double rata,int nomor){
    
    if(data->nilai>=rata){
        cout<<nomor<<". NAMA: "<<data->nama<<endl;
        cout<<"  NILAI: "<<data->nilai<<endl;
    }
}
int main(){
    int n;
    cout<<"Masukkan jumlah siswa: ";
    cin>>n;
    Siswa data[n];
    cin.ignore();
    for(int i=0;i<n;i++){
        cout<<"INPUT DATA "<<i+1<<endl;
        inputData(&data[i]);
    }
    int indeksmaks=cariMaks(data,n);
    int indeksmin=cariMin(data,n);
    double hitungrata=hitungRata(data,n);
    cout<<"NILAI TERKECIL: "<<data[indeksmin].nilai<<endl;
    cout<<"NILAI TERBESAR: "<<data[indeksmaks].nilai<<endl;
    int nomor=1;
    for(int i=0;i<n;i++){
        if (data[i].nilai >= hitungrata) {
        tampilrata(&data[i],hitungrata,nomor);
        nomor++;
    }
  }
}