#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
struct Produk{
    string nama;
    int stok;
    int harga;
};
void inputData(Produk *data){
    cout<<"Masukkan nama produk: ";
    getline(cin,data->nama);
    cout<<"Masukkan jumlah stok: ";
    cin>>data->stok;
    cout<<"masukkan harga produk: ";
    cin>>data->harga;
    cin.ignore();
}
void tampilData(Produk *data,int nomor){
    
    cout<<"\033[32m"<<nomor<<". Nama: "<<data->nama<<endl;
    cout<<"   Stok: "<<data->stok<<endl;
    cout<<"   Harga: "<<data->harga<<endl;
    cout<<"-----------------------------"<<endl;
}
int cariTermahal(Produk data[],int jumlah){
    int maks=0;
    for(int i=1;i<jumlah;i++){
        if(data[i].harga>data[maks].harga){
            maks=i;
        }
    }return maks;
}
long long totalInvanteris(Produk data[],int jumlah){
    long long sum=0;
    for(int i=0;i<jumlah;i++){
        sum+=data[i].stok*data[i].harga;
    }return sum;
}
int main(){
    int n;
    cout<<"Masukkan jumlah nama produk: ";
    cin>>n;
    cin.ignore();
    Produk data[n];
    for(int i=0;i<n;i++){
        cout<<"input data ke-"<<i+1<<endl;
        inputData(&data[i]);
    }
    system("cls");
    cout<<"\033[32m"<<"--------DAFTAR PRODUK--------"<<"\033[0m"<<endl;
    for(int i=0;i<n;i++){
        tampilData(&data[i],i+1);
    }
    int indeks=cariTermahal(data, n);
    long long TOTAL=totalInvanteris(data,n);
    cout<<"\033[35m"<<"Produk Termahal: "<<data[indeks].nama<<endl;
    cout<<"Total invanteris: "<<TOTAL<<"\033[0m"<<endl;
}