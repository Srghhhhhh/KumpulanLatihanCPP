#include <iostream>
using namespace std;
class Bioskop{
    private:
    string judulFilm;
    int hargaTiket;
    int sisaKursi;
    int jumlahTiket;
    public:
    Bioskop(string inputjudul,int inputhargatiket){
        judulFilm=inputjudul;
        hargaTiket=inputhargatiket;
        sisaKursi=50;
        
    }
    void pesanTiket(int jumlah){
        if(sisaKursi>jumlah){
            sisaKursi-=jumlah;
            jumlahTiket=jumlah;
            cout<<"Berhasil memesan "<<jumlah<<" tiket"<<endl;
        }else{
            cout<<"Maaf kursi tidak mencukupi!, sisa kursi tinggal "<<jumlah<<endl;
        }
    }
    int totalharga(){
        return jumlahTiket*hargaTiket;
    }
    void tampil(){
        cout<<"--------Data--------"<<endl;
        cout<<"Judul Film: "<<judulFilm<<endl;
        cout<<"Jumlah Tiket: "<<jumlahTiket<<endl;
        cout<<"Total Harga Tiket: "<<totalharga();
    }
};
int main(){
    Bioskop data("avanger",25000);
    data.pesanTiket(3);
    data.tampil();
}