#include<iostream>
using namespace std;
main(){
    string nama_dpn,nama_blkg,bulan,bulan2;
    int tgl,tgl2,tahun,thn2,umur,umur2;

    cout <<"Program Biodata\n";
    cout <<"Masukkan biodata anda\n";
    cout <<"Nama Depan :";
    cin >>nama_dpn;
    cout <<"Nama Belakang :";
    cin >>nama_blkg;

    cout <<"Tanggal Lahir\n";
    cout <<"Tanggal :";
    cin>>tgl;
    cout <<"Bulan :";
    cin>>bulan;
    cout <<"Tahun :";
    cin >>tahun;

    cout <<endl;
    cout <<"Tanggal Sekarang:";
    cin>>tgl2;
    cout <<"Bulan sekarang :";
    cin>>bulan2;
    cout <<"Tahun Sekarang :";
    cin >>thn2;

    cout<<endl;

    // --- Proses Menghitung Umur ---
        if (thn2 > tahun)
        {
            umur = thn2 - tahun;
            if (tgl2 >= tgl)
            {
                umur2 = umur;
            }
            else if (tgl2 >= tgl)
            {
                umur2 = umur - 1;
            }
            else if (tgl2 < tgl)
            {
                umur2 = umur - 1;
            }
        }

    cout <<"Nama Anda : "<<nama_dpn <<" " <<nama_blkg;cout <<endl;
    cout <<"Tanggal Lahir Anda : "<<tgl <<" " <<bulan <<" " <<tahun;cout <<endl;
    cout <<"Umur Anda : "<<umur2;
    return 0;
}
