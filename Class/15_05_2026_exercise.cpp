#include <iostream>
#include <string>
using namespace std;

class Mobilya{
  protected:
    string ad;
    string malzeme;
    double tabanFiyat;
    
  public:
    Mobilya(string m_ad,string m_malzeme,double m_tabanFiyat){
        ad = m_ad;
        malzeme = m_malzeme;
        tabanFiyat = m_tabanFiyat;
    }
    
    virtual ~Mobilya(){}
    
    virtual void ozellikleriGoster() = 0;
    
    virtual double fiyatHesapla() = 0;
};

class Masa : public Mobilya{
  private:
    double uzunluk;
    double genislik;
    double birimMaliyet;
    
  public:
    Masa(string m_ad,string m_malzeme,double m_tabanFiyat,double m_uzunluk,double m_genislik,double m_birimMaliyet) : Mobilya(m_ad,m_malzeme,m_tabanFiyat){
        uzunluk = m_uzunluk;
        genislik = m_genislik;
        birimMaliyet = m_birimMaliyet;
    }
    
    void ozellikleriGoster() override{
        cout<<"[MASA] \nAd: "<<ad<<"\nMalzeme: "<<malzeme<<"\nBoyutlar: "<<uzunluk<<"x"<<genislik<<" m"<<"\”Taban Fiyat: "<<tabanFiyat<<" TL"<<endl;
    }
    
    double fiyatHesapla() override{
        double alan = uzunluk * genislik;
        return tabanFiyat + (alan*birimMaliyet);
    }

};

class Sandalye : public Mobilya{
    private:
        bool tekerlekliMi;
        double mekanizmaUcreti;
        
    public:
        Sandalye(string m_ad,string m_malzeme,double m_tabanFiyat,bool m_tekerlekliMi,double m_mekanizmaUcreti) : Mobilya(m_ad,m_malzeme,m_tabanFiyat){
            tekerlekliMi = m_tekerlekliMi;
            mekanizmaUcreti = m_mekanizmaUcreti;
        }
        
        void ozellikleriGoster() override{
            cout<<"[SANDALYE] \nAd: "<<ad<<"\nMalzeme: "<<malzeme<<"\nTekerlekli Mi: "<<(tekerlekliMi ? "Evet" : "Hayir")<<"\nTaban Fiyat: "<<tabanFiyat<<" TL"<<endl;
        }

        double fiyatHesapla() override{
            if(tekerlekliMi){
                return tabanFiyat + mekanizmaUcreti;
            }
            return tabanFiyat;
        }
};

int main() {
    
    Mobilya* stokListesi[4];
    
    stokListesi[0] = new Masa("Calisma Masasi","Ahsap",1500.0,1.5,0.8,300.0);
    stokListesi[1] = new Masa("Yemek Masasi","Cam",2500.0,2.0,1.0,500.0);
    stokListesi[2] = new Sandalye("Ofis Sandalyesi","Kumas",800.0,true,250.0);
    stokListesi[3] = new Sandalye("Mutfak Sandalyesi","Plastik",400.0,false,0.0);

    for(int i = 0; i < 4; i++){
        stokListesi[i]->ozellikleriGoster();
        cout<<"-> Satis Fİyati: "<<stokListesi[i]->fiyatHesapla()<<" TL\n"<<endl;
    }

    for(int i=0; i<4 ; i++){
        delete stokListesi[i];
        stokListesi[i] = nullptr;
    }

    return 0;
}
