#include<iostream>
using namespace std;
main(){
    //Deklarasi
    int banyak_data,jumlah_data,data,isi_data,totaldata,bil_genap,bil_ganjil;
    float rata_rata;

    totaldata =0;
    cout<<"\n masukan banyaknya data : ";
    cin>>banyak_data;

    bil_genap = 0;
    bil_ganjil = 0;

    for(data=1;data<=banyak_data;data++){
    cout <<data<<".\tData "<<data <<"=";
    cin>>isi_data;
    totaldata = totaldata+isi_data;

     if(isi_data %2 == 0){
        bil_genap = bil_genap + isi_data;
    }
    if(isi_data %2 != 0){
        bil_ganjil = bil_ganjil+isi_data;
    }
}

    cout << "Total datanya adalah " <<totaldata <<endl;
   cout << "Total bil genap adalah " <<bil_genap <<endl;
   cout << "Total bil ganjil adalah " <<bil_ganjil <<endl;

}
