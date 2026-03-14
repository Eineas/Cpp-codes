#include <iostream>
#include <string>
using namespace std;

class Fatura{
  private: 
      string faturaNo;
      string musteriAdi;
      double kdvOrani;
      double araToplam;
  
  public:
      Fatura(string no,string musteri,double kdv,double ara){
          faturaNo = no;
          musteriAdi = musteri;
          setKdvOrani(kdv);
          setAraToplam(ara);
          
      }
  string getFaturaNo(){
      return faturaNo;
  }
  
  string getMusteriAdi(){
      return musteriAdi;
  }
  
  double getKdvOrani(){
      return kdvOrani;
  }
  
  double getAraToplam(){
      return araToplam;
  }
    
  void setFaturaNo(string no){
      faturaNo = no;
  }    
  
  void setMusteriAdi(string musteri){
      musteriAdi = musteri;
  }
  
  void setAraToplam(double tutar){
      araToplam = tutar;;
  }
  
  void setKdvOrani(double oran){
      if(oran >= 0.0 && oran <= 1.0){
          kdvOrani = oran;
       }
       else{
           cout<<"Dikkat gecersiz KDV orani (0-1 arasında olmalı)!"<<endl;
       }
  }
    
  double kdvHesapla(){
      return araToplam * kdvOrani;
  }
  
  double genelToplam(){
      return araToplam += kdvHesapla();
  }
  
  void faturaYazdir(){
      cout<<"==========FATURA============="<<endl;
      cout<<"Fatura No: "<<faturaNo<<endl;
      cout<<"Musteri: "<<musteriAdi<<endl;
      cout<<"Ara Toplam: "<<araToplam<<" TL"<<endl;
      cout<<"KDV (%"<<kdvOrani * 100<<") : "<<kdvHesapla()<<" TL"<<endl;
      cout<<"GENEL TOP. : "<<genelToplam()<<" TL"<<endl;
      cout<<"============================="<<endl<<endl;
  }
 
};

int main() {
    Fatura f1("F-2024-001","Mehmet Şen", 0.2, 1000);    
    f1.faturaYazdir();
    
    f1.setAraToplam(2500);
    f1.faturaYazdir();
    
    f1.setKdvOrani(1.5);

    return 0;
}
