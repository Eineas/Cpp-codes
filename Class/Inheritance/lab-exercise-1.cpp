#include <iostream>
#include <string>
using namespace std;

class Insan{
    protected:
        string ad;
        int yas;
        int id;
    
    public:
        Insan(string a,int y,int i){
        ad = a;
        yas = y;
        id = i;
    }
    
    void yazdir(){
        cout<<"Ad: "<<ad<<endl;
        cout<<"Yas: "<<yas<<endl;
        cout<<"ID: "<<id<<endl;
    }
};

class Ogrenci : public Insan{
    private:
        string bolum;
        
    public:
        Ogrenci(string a,int y,int i,string b) : Insan(a,y,i){
            bolum = b;
        }
    
    void yazdir(){
        cout<<"Ad: "<<ad<<endl;
        cout<<"Yas: "<<yas<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Bolum: "<<bolum<<endl;
    }
    
    void dersKayit(string ders){
        cout<<ad<<", "<<ders<<" dersine kayıt oldu."<<endl;
    }
};

class Calisan : public Insan {
    private:
        double maas;
        
    public: 
        Calisan(string a,int y,int i,double m) : Insan(a,y,i){
            maas = m;
        }
        
    void yazdir(){
        cout<<"Ad: "<<ad<<endl;
        cout<<"Yas: "<<yas<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Maas: "<<maas<<" TL"<<endl;
        cout<<"\n";
    }
        
    void zamHesapla(double oran){
        maas += maas * oran;
        cout<<"Yeni Maas: "<<maas<<" TL"<<endl;
    }
};

int main() {
    
    Ogrenci ogr1("Ahmet",21,1001,"Bilgisayar Muhendisligi");
    Calisan cal1("Ayse",35,2001,40000);
    
    ogr1.yazdir();
    ogr1.dersKayit("Veri Yapıları");
    
    cout<<"\n----------------------------------------------"<<endl;
    
    cal1.yazdir();
    cal1.zamHesapla(0.15);
    cal1.yazdir();
    
    return 0;
}
