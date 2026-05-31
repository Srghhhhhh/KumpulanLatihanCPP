#include <iostream>
using namespace std;
struct Pulau{
    string nama;
    long long luas;
    long long penduduk;
};
void inputdata(Pulau *data){
    cout<<"Masukkan nama pulau: ";
    getline(cin,data->nama);
    cout<<"Masukkan luas: ";
    cin>>data->luas;
    cout<<"Masukkan jumlah penduduk: ";
    cin>>data->penduduk;
    cin.ignore();
}
int kepadatan(Pulau data[],int jumlah){
    int padat=0;
    for(int i=1;i<jumlah;i++){
        if(data[i].penduduk/data[i].luas>data[padat].penduduk/data[padat].luas){
            padat=i;
        }
    }return padat;
}
int cariluas(Pulau data[],int jumlah){
    int luasss=0;
    for(int i=1;i<jumlah;i++){
        if(data[i].penduduk/data[i].luas>data[luasss].penduduk/data[luasss].luas){
            luasss=i;
        }
    }return luasss;
}
int kepdatan(Pulau data[],int jumlah){
    int sum=0;
    for(int i=0;i<jumlah;i++){
        sum+=data[i].penduduk/data[i].luas;
    }return sum/jumlah;
}
int main(){
    int n;
    cout<<"Masukkan jumlah pulau: ";
    cin>>n;
    cin.ignore();
    Pulau data[n];
    for(int i=0;i<n;i++){
        cout<<"INPUT DATA "<<i+1<<endl;
        inputdata(&data[i]);
    }
    int padat=kepadatan(data,n);
    int luass=cariluas(data,n);
    int kepadatan=(data,n);
    cout<<"Pulau dengan kepadatan tertinggi: "<<data[padat].nama<<endl;
    cout<<"Pulau dengan luas terbesar: "<<data[luass].nama<<endl;
    cout<<"Rata rata kepadatan pulau: "<<kepadatan;
}