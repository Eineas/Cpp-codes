#include <iostream>
#include <string>
using namespace std;

class Bina{
    protected:
        int katSayisi;
        int metrekare;
        bool bahceVarMi;
        bool otoparkVarMi;
    
    public:
        Bina(){
            katSayisi = 0;
            metrekare = 0;
            bahceVarMi = false;
            otoparkVarMi = false;
        }
        
        void setKatSayisi(int k){
            katSayisi = k;
        }
        
        int getKatSayisi(){
            return katSayisi;
        }
        
        void setMetrekare(int m){
            metrekare = m;
        }
        
        int getMetrekare(){
            return metrekare;
        }
        
        void setBahceVarMi(bool b){
            bahceVarMi = b;
        }
        
        bool getBahceVarMi(){
            return bahceVarMi;
        }
        
        void setOtoparkVarMi(bool o){
            otoparkVarMi = o;
        }
        
        bool getOtoparkVarMi(){
            return otoparkVarMi;
        }
        
        void bilgiYazdir(){
            cout<<"Kat Sayisi: "<<katSayisi<<endl;
            cout<<"Metrekare: "<<metrekare<<" Metrekare"<<endl;
            cout<<"Bahce: "<<(bahceVarMi ? "Var" : "Yok")<<endl;
            cout<<"Otopark: "<<(otoparkVarMi ? "Var" : "Yok")<<endl;
        }
};

class Apartman : public Bina{
    private: 
        int daireSayisi;
        
    public:
        Apartman(){
            daireSayisi = 0;
        }
        
        void setDaireSayisi(int d){
            daireSayisi = d;
        }
        
        int getDaireSayisi(){
            return daireSayisi;
        }
        
        void bilgiYazdir(){
            cout<<"--- Apartman Bilgileri ---"<<endl;
            Bina::bilgiYazdir();
            cout<<"Daire Sayisi: "<<daireSayisi<<endl;
        }
};

class Okul : public Bina{
    private:
        int sinifSayisi;
        
    public: 
        Okul(){
            sinifSayisi = 0;
        }
        
        void setSinifSayisi(int s){
            sinifSayisi = s;
        }
        
        int getSinifSayisi(){
            return sinifSayisi;
        }
        
        void bilgiYazdir(){
            cout<<"--- Okul Bilgileri ---"<<endl;
            Bina::bilgiYazdir();
            cout<<"Sinif Sayisi: "<<sinifSayisi<<endl;
        }
};

class Hastane : public Bina{
  private: 
    int yatakSayisi;
    
  public:
    Hastane(){
        yatakSayisi = 0;
    }
  
    void setYatakSayisi(int y){
            yatakSayisi = y;
        }
        
        int getYatakSayisi(){
            return yatakSayisi;
        }
  
        void bilgiYazdir(){
            cout<<"--- Hastane Bilgileri ---"<<endl;
            Bina::bilgiYazdir();
            cout<<"Yatak Sayisi: "<<yatakSayisi<<endl;
        }
};

int main(){
    
    Apartman apt;
    apt.setKatSayisi(5);
    apt.setMetrekare(800);
    apt.setBahceVarMi(true);
    apt.setOtoparkVarMi(true);
    apt.setDaireSayisi(10);
    
    Okul okul;
    okul.setKatSayisi(4);
    okul.setMetrekare(3000);
    okul.setBahceVarMi(true);
    okul.setOtoparkVarMi(true);
    okul.setSinifSayisi(40);
    
    Hastane hst;
    hst.setKatSayisi(12);
    hst.setMetrekare(10000);
    hst.setBahceVarMi(false);
    hst.setOtoparkVarMi(true);
    hst.setYatakSayisi(300);
    
    apt.bilgiYazdir();
    cout<<endl;
    
    okul.bilgiYazdir();
    cout<<endl;
    
    hst.bilgiYazdir();
    cout<<endl;
    
    return 0;
}
