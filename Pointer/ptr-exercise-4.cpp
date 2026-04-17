#include <iostream>
using namespace std;

void adres(double* u,double *g,double* y,double* r){
    cout<<"-----------Bellek adresleri------------"<<endl;
    cout<<"Uzunluk: "<<u<<endl;
    cout<<"Genislik: "<<g<<endl;
    cout<<"Yükseklik: "<<y<<endl;
    cout<<"Yarıçap: "<<r<<endl;
    cout<<"---------------------------------------"<<endl;
}

int main() {
    double* uzunluk = new double;
    double* genislik = new double;
    double* yukseklik = new double;
    double* yaricap = new double;
    double* hacim = new double;
    double* alan = new double;
    double pi = 3.14;
    
    cout<<"Uzunluk,genislik ve yükseklik değerlerini prizma için giriniz: "<<endl;
    cin>>*uzunluk>>*genislik>>*yukseklik;
    
    cout<<"Yarıçap değerini giriniz: "<<endl;
    cin>>*yaricap;
    
    *hacim = (*uzunluk) * (*genislik) * (*yukseklik);
    *alan = (pi) * (*yaricap) * (*yaricap);
    
    adres(uzunluk,genislik,yukseklik,yaricap);
    
    cout<<"Prizmanın hacmi: "<<*hacim<<endl;
    cout<<"Dairenin alanı: "<<*alan<<endl;
    
    delete uzunluk;
    delete genislik;
    delete yukseklik;
    delete yaricap;
    delete hacim;
    delete alan;
     
    return 0;
}
