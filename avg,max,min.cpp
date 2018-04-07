#include<iostream>
using namespace std;
main(){
    //Deklarasi
    int banyak_data,jumlah_data,data,isi_data,totaldata,nilai_max,nilai_min;
    float rata_rata;

    totaldata =0;
    cout<<"\n masukan banyaknya data : ";
    cin>>banyak_data;

    nilai_max = -999;
    nilai_min = 999;

    for(data=1;data<=banyak_data;data++){
    cout <<data<<".\Data "<<data <<"=";
    cin>>isi_data;
    totaldata = totaldata+isi_data;

     if(isi_data < nilai_min){
        nilai_min = isi_data;
    }
    if(isi_data > nilai_max){
        nilai_max = isi_data;
    }
}

    cout << "Total datanya adalah " <<totaldata <<endl;
    rata_rata = totaldata/banyak_data;
    cout << "Rata rata datanya adalah " <<rata_rata <<endl;
   cout << "Nilai max adalah " <<nilai_max <<endl;
   cout << "Nilai min adalah " <<nilai_min <<endl;

}
