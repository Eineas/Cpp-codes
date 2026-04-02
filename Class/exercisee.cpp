#include <iostream>
using namespace std;

class Kumas{
    private:
    
      string urunAdi;
      string tur;
      double pamukOrani;
      double bambuOrani;
      double polyesterOrani;
    
    public:
      Kumas(){}
    
      Kumas(string urunAdi,string tur,double pamukOrani,double bambuOrani,double polyesterOrani){
          this->urunAdi = urunAdi;
          this->tur = tur;
          this->pamukOrani = pamukOrani;
          this->bambuOrani = bambuOrani;
          this->polyesterOrani = polyesterOrani;
      }
    
    void setUrunAdi(string urunAdi){
        this->urunAdi = urunAdi;
    }
    
    void setTur(string tur){
        this->tur = tur;
    }
    
    void setPamukOrani(double pamukOrani){
        if(pamukOrani >=0 && pamukOrani<=100){
        this->pamukOrani = pamukOrani;
        }
        else{
            cout<<"Gecersiz oran!"<<endl;
        }
    }
    
    void setBambuOrani(double bambuOrani){
        if(bambuOrani >=0 && bambuOrani<=100){
        this->bambuOrani = bambuOrani;
        }
        else{
            cout<<"Gecersiz oran!"<<endl;
        }
    }
    
    void setPolyesterOrani(double polyesterOrani){
        if(polyesterOrani >=0 && polyesterOrani<=100){
        this->polyesterOrani = polyesterOrani;
        }
        else{
            cout<<"Gecersiz oran!"<<endl;
        }
    }
    
    string getUrunAdi(){
        return urunAdi;
    }
    
    string getTur(){
        return tur;   
    }
    
    double getPamukOrani(){
        return pamukOrani;
    }
    
    double getBambuOrani(){
        return bambuOrani;
    }
    
    double getPolyesterOrani(){
        return polyesterOrani;
    }
    
    double toplamOranHesapla(){
        return bambuOrani + pamukOrani + polyesterOrani;
    }
    
    string saglikliMi(){
        if(this->pamukOrani + this->bambuOrani >= 50){
            return "Saglikli";
        }
        else{
            return "Sagliksiz";
        }
    }
    
    void bilgileriYazdir(){
        cout<<"--------------------------"<<endl;
        cout<<"Urun adi: "<<getUrunAdi()<<endl;
        cout<<"Tur: "<<getTur()<<endl;
        cout<<"Pamuk orani: "<<getPamukOrani()<<endl;
        cout<<"Bambu orani: "<<getBambuOrani()<<endl;
        cout<<"Polyester orani: "<<getPolyesterOrani()<<endl;
        cout<<"Toplam Oran: "<<toplamOranHesapla()<<endl;
        cout<<"Saglik Durumu: "<<saglikliMi()<<endl;
        cout<<"--------------------------"<<endl<<endl;
    }
};

int main() 
{
    Kumas k1;
    k1.setUrunAdi("Magic");
    k1.setTur("Kazak");
    k1.setPamukOrani(4.67);
    k1.setBambuOrani(27.4);
    k1.setPolyesterOrani(10.8);
    
    k1.bilgileriYazdir();
    
    Kumas k2("Polaris","Hırka",20.34,12.5,19.3);
    
    k2.bilgileriYazdir();
    
    
    return 0;
}
