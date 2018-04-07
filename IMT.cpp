#include<iostream>
#include<math.h>
using namespace std;

int main(){
    //DEKLARASI
    string nama,kategori;
    float tinggiBadan,beratBadan,IMT;

    cout << "Program IMT\n";
    cout << "Masukkan nama anda = ";
    cin >>nama;
    cout << "Masukkan Tinggi badan anda (dalam meter) = " ; //dalam meter
    cin >> tinggiBadan ;
    cout << "Masukkan Berat badan anda = ";
    cin >> beratBadan;

    IMT = (beratBadan) / (tinggiBadan*tinggiBadan);

    if(IMT <= 18.4)
    {
        kategori = "Berat badan kurang";
    }
    else if(IMT >= 18.5 && IMT <= 24.9)
    {
        kategori = "Berat badan ideal";
    }
    else if(IMT >= 25 && IMT <= 29.9)
    {
        kategori = "Berat badan lebih";
    }
    else if(IMT >= 30 && IMT <= 39.9)
    {
        kategori = "Berat badan Gemuk";
    }
    else if(IMT >= 40)
    {
        kategori = "Sangat Gemuk";
    }


    cout <<"\n------NIali IMT Anda------\n";
    cout <<"IMT "<<IMT  << endl;
    cout <<"Nama orang :"<<nama << endl;
    cout <<"Tinggi Badan :"<<tinggiBadan <<" m" << endl;
    cout <<"Berat Badan :"<<beratBadan <<" kg" << endl;
    cout <<"Anda Kategori "<<kategori  << endl;
return 0;
}
