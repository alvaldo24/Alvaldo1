#include<iostream>
#include<windows.h>
using namespace std;
main ()
{
    string nomor [5]={"A001", "A002", "A003", "A007", "A008"};
    string nama [5]={"Bayu", "Irvan", "Susiati", "Diana", "Roni"};
    int jum=5, hs, jml; string cari;
    struct belanja {
    string member, nama, nb;
    int jb, hb, jm, tot=0, dis, total;};
    belanja toko;
    cout<<"Selamat Datang di Toko Alva"<<endl;
    cout<<"==========================="<<endl;
    cout<<"\nApakah Anda member? (iya/bukan) : "; cin>>toko.member;
    if (toko.member=="iya")
    {
        cout<<"Masukkan nomor identitas member Anda : "; cin>>cari;
        for (int i=0; i<jum; i++)
        {
            if (cari==nomor[i])
            {
                toko.nama=nama[i];
                cout<<"\nSelamat datang "<<toko.nama<<", selamat berbelanja";
            }
        }
        cout<<"\nJumlah barang yang akan dibeli : "; cin>>toko.jb;
        for (int a=1; a<=toko.jb; a++)
        {
            cout<<"\nNama barang ke-"<<a<<"   : "; cin>>toko.nb;
            cout<<"Harga barang ke-"<<a<<"  : "; cin>>toko.hb;
            cout<<"Jumlah barang ke-"<<a<<" : "; cin>>toko.jm;
            jml=toko.hb*toko.jm;
            toko.tot=toko.tot+jml;
        }
        toko.dis=toko.tot*5/100;
        toko.total=toko.tot-toko.dis;
    }
    else if (toko.member=="bukan")
    {
        cout<<"\nSilahkan masukkan nama Anda : "; cin>>toko.nama;
        cout<<"\nJumlah barang yang akan dibeli : "; cin>>toko.jb;
        for (int a=1; a<=toko.jb; a++)
        {
            cout<<"\nNama barang ke-"<<a<<"   : "; cin>>toko.nb;
            cout<<"Harga barang ke-"<<a<<"  : "; cin>>toko.hb;
            cout<<"Jumlah barang ke-"<<a<<" : "; cin>>toko.jm;
            jml=toko.hb*toko.jm;
            toko.tot=toko.tot+jml;
        }
        toko.dis=0;
        toko.total=toko.tot-toko.dis;
    }
    system ("cls");
    cout<<"Berikut rincian belanja Anda : "<<endl;
    cout<<"\nJenis member (iya/bukan)   : "<<toko.member;
    cout<<"\nNama pelanggan             : "<<toko.nama;
    cout<<"\nTotal harga barang         : "<<toko.tot;
    cout<<"\nDiskon yang didapatkan     : "<<toko.dis;
    cout<<"\nTotal harga setelah diskon : "<<toko.total;
    cout<<"\n\nTerimakasih, silahkan lakukan pembayaran :)";
    cout<<endl;
}
