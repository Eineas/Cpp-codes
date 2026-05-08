#include <iostream>
using namespace std;

class Ogrenci{
  protected:
    string ad;
  public:
    Ogrenci(string ad) {
        this->ad = ad;
    }

    virtual void bilgiGoster(){
        cout<<"Ogrenci Adi: "<<ad<<endl;
    }
    
    virtual double notHesapla() = 0;
};

class LisansOgrencisi : public Ogrenci{
  private:
    double vize;
    double finalNotu;
    
  public:
    LisansOgrencisi(string ad,double vize,double finalNotu) : Ogrenci(ad){
        this->vize = vize;
        this->finalNotu = finalNotu;
    }

    double notHesapla() override{
        return (vize * 0.4) + (finalNotu *0.6);
    }
    
};

class YuksekLisansOgrencisi : public Ogrenci{
    private: 
        double proje;
    public:
        YuksekLisansOgrencisi(string ad,double proje) : Ogrenci(ad){
            this->proje = proje;
        }
        
        double notHesapla() override{
            return proje;
        }
};

int main() {
    
    LisansOgrencisi lisansOgr("Ali Yilmaz", 65.0, 80.0);
    YuksekLisansOgrencisi yuksekLisansOgr("Ayse Kaya",90.5);
    
    lisansOgr.bilgiGoster();
    cout<<"Notu: "<<lisansOgr.notHesapla()<<"\n"<<endl;
    
    yuksekLisansOgr.bilgiGoster();
    cout<<"Notu: "<<yuksekLisansOgr.notHesapla()<<"\n"<<endl;
    
    return 0;
}
