#include <iostream>
using namespace std;

class OyuncuBilgisayari{
  private:

    string markaModel;
    string ekranKarti;
    int ramKapasitesi;
    int depolamaTB;

  public:

    OyuncuBilgisayari(){    
        markaModel = "Belirtilmedi";
        ekranKarti = "Yok";
        ramKapasitesi = 0;
        depolamaTB = 0;
    }

    OyuncuBilgisayari(string markaModel,string ekranKarti,int ramKapasitesi,int depolamaTB){
        setMarkaModel(markaModel);
        setEkranKarti(ekranKarti);
        setRamKapasitesi(ramKapasitesi);
        setDepolama(depolamaTB);
    }

    void setMarkaModel(string markaModel){
        this->markaModel = markaModel;
    }
  
    void setEkranKarti(string ekranKarti){
        this->ekranKarti = ekranKarti;
    }

    void setRamKapasitesi(int ramKapasitesi){
      if(ramKapasitesi>=16){
        this->ramKapasitesi = ramKapasitesi;
      }
      else{
        cout<<"Yetersiz RAM! Girdiginzi deger: "<<ramKapasitesi<<" GB"<<endl;
        this->ramKapasitesi = 16;
      }
    }

    void setDepolama(int depolamaTB){
        this->depolamaTB=depolamaTB;        
    }

    string getMarkaModel(){
        return markaModel;
    }

    string getEkranKarti(){
        return ekranKarti;
    }

    int getRamKapasitesi(){
        return ramKapasitesi;
    }

    int getDepolama(){
        return depolamaTB;
    }

    ~OyuncuBilgisayari(){
        cout<<"Sistem kapatildi.["<<markaModel<<"]"<<endl;
    }

    int performansPuaniHesapla(){
        return (ramKapasitesi*100)+(depolamaTB*500);
    }

    void bilgileriYazdir(){
        cout<<"--------------------------------------"<<endl;
        cout<<"Marka Model: "<<getMarkaModel()<<endl;
        cout<<"Ekran Karti: "<<getEkranKarti()<<endl;
        cout<<"Ram kapasitesi(GB): "<<getRamKapasitesi()<<endl;
        cout<<"Depolama(TB): "<<getDepolama()<<endl;
        cout<<"Performans Puani: "<<performansPuaniHesapla()<<endl;
        cout<<"--------------------------------------"<<endl;
    }

};

int main(){
    OyuncuBilgisayari b1("MSI Katana 17 B13VFK-1018TR","RTX 4060",32,1);
    b1.bilgileriYazdir();

    OyuncuBilgisayari b2;
    b2.setMarkaModel("Lenovo LOQ Essential 15IRX11");
    b2.setEkranKarti("RTX 3050");
    b2.setRamKapasitesi(4);
    b2.setDepolama(2);

    b2.bilgileriYazdir();


    return 0;
}
