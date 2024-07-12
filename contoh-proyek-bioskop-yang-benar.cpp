#include<iostream>
#include<conio.h>
using namespace std;

int main(){

char nama[40],alamat[30];
int film,jam,kursi,tiket,tot,uang,maaf,kurang,kembali;
awal:
      cout<<""<<endl;
      cout<<"==============================================="<<endl;
      cout<<""<<endl;
      cout<<"            BIOSKOP 21         "<<endl;
      cout<<""<<endl;
      cout<<"==============================================="<<endl;
      cout<<"          Masukan data diri anda"<<endl;
      cout<<""<<endl;
      cout<<"          Nama  :";cin>>nama;
      cout<<""<<endl;
      cout<<"          Alamat:";cin>>alamat;
      cout<<"==============================================="<<endl;
      cout<<"         Masukan film yang mau ditonton"<<endl;
      cout<<""<<endl;
      cout<<"         1.Batman"<<endl;
      cout<<""<<endl;
      cout<<"         2.Superman"<<endl;
      cout<<""<<endl;
      cout<<"         3.King Kong"<<endl;
      cout<<""<<endl;
      cout<<"         PILIH SALAH SATU:";cin>>film;
      cout<<""<<endl;
if(film==1)
{
      cout<<"================================================"<<endl;
      cout<<"         ANDA MEMILIH BATMAN"<<endl;
      cout<<"================================================"<<endl;
      cout<<"         Silahkan pilih jam tayang"<<endl;
      cout<<"================================================"<<endl;
      cout<<"         1. 10.00 WIB"<<endl;
      cout<<"         2. 14.00 WIB"<<endl;
      cout<<"         3. 16.00 WIB"<<endl;
      cout<<"         4. 19.00 WIB"<<endl;
      cout<<"         pilih salah satu:";cin>>jam;
      cout<<"================================================="<<endl;
      cout<<"         PEMESANAN TIKET"<<endl;
      cout<<"         Harga Per Tiket    :Rp.50000"<<endl;
      cout<<"         jumlah pesan tiket :";cin>>tiket;
tot=50000*tiket;
      cout<<"         harga total pembayaran:"<<tot<<endl;
      cout<<"         Uang Yang Dibayarkan  :Rp.";cin>>uang;
if(uang<tot)
{
      cout<<endl;
maaf=tot-uang;
      cout<<"         Maaf Uang Anda Kurang Rp."<<maaf<<endl;
      cout<<"         Masukkan Kekurangan anda:Rp.";cin>>kurang;
kembali=(uang+kurang)-tot;
      cout<<"=================================================="<<endl;
      cout<<"         Uang Kembalian Anda    :Rp."<<kembali;
      cout<<endl;
      cout<<"=================================================="<<endl;
}
else
{
kembali=uang-tot;
      cout<<"==================================================="<<endl;
      cout<<"        Uang Kembalian Anda  : Rp."<<kembali<<endl;
      cout<<"==================================================="<<endl;
}


      cout<<""<<endl;
      cout<<"==================================================="<<endl;
      cout<<""<<endl;
      cout<<"        BROWSUR PEMBELIAN TIKET"<<endl;
      cout<<""<<endl;
cout<<"==================================================="<<endl;
cout<<""<<endl;
cout<<"        Nama                   :"<<nama;
cout<<""<<endl;
cout<<"        Alamat                 :"<<alamat;
cout<<""<<endl;
cout<<"        jam tayang             :"<<jam;
cout<<""<<endl;
cout<<"        kursi yang anda pilih  :"<<kursi;
cout<<""<<endl;
cout<<"        jumlah tiket           :"<<tiket;
cout<<""<<endl;
cout<<"        total pembayaran       :"<<tot;
cout<<""<<endl;
cout<<"        uang yang dibayarkan   :"<<uang;
cout<<""<<endl;
cout<<"        kembalian              :"<<kembali;
cout<<""<<endl;
cout<<"=============================================="<<endl;
cout<<""<<endl;
cout<<"        SELAMAT MENONTON        "<<endl;
          cout<<""<<endl;
          cout<<"=============================================="<<endl;
   }

 }








