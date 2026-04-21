#include <iostream>
using namespace std;

class Sekil{
  protected:
    string renk;
    double kenar1,kenar2; 
    
    
  public:
    void setRenk(string r){
        renk = r;
    }
  void setKenar(double k1,double k2 = 0){ 
      kenar1 = k1;
      kenar2 = k2;
  }
  void  bilgiVer(){
      cout<<"Bu seklin rengi: "<<renk<<endl;
  }
  
};

class Dikdortgen : public Sekil {
  public:
    double alanHesapla(){
        return kenar1 * kenar2;
    }
};

class Ucgen : public Sekil{
  public:
    double alanHesapla(){
        return (kenar1 * kenar2)/2;
    }
    double cevreHesapla(){
        return kenar1 + kenar1 + kenar2;
    }
};

class Daire : public Sekil{
  private:
    double PI = 3.14159;
  
  public:
    double alanHesapla(){
        return PI*kenar1 * kenar1;
    }
};

int main() {

    Dikdortgen d;
    Ucgen u;
    Daire da;
    
    d.setRenk("Kırmızı");
    u.setRenk("Mavi");
    da.setRenk("Yeşil");
    
    d.setKenar(5,10);
    u.setKenar(4,6);
    da.setKenar(3);

    d.bilgiVer();
    cout<<"Dikdortgenin alanı: "<<d.alanHesapla()<<endl;
    
    u.bilgiVer();
    cout<<"Ucgenin alanı: "<<u.alanHesapla()<<endl;
    cout<<"Ucgenin cevresi: "<<u.cevreHesapla()<<endl;

    da.bilgiVer();
    cout<<"Dairenin alanı: "<<da.alanHesapla()<<endl;
    
    return 0;
}
