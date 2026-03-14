#include <iostream>
#include <string>
using namespace std;

class Kargo{
  private:
  
    string takipNo;
    string gonderen;
    string alici;
    double agirlik;
    string teslimatTipi;

  public:
    Kargo(string no,string gon,string al,double agir,string tip){
        takipNo = no;
        gonderen = gon;
        alici = al;
        agirlik = 1.0;
        teslimatTipi = "standart";
        
        setAgirlik(agir);
        setTeslimatTipi(tip);
    }
    
    string getTakipNo(){
        return takipNo;
    }
    
    string getGonderen(){
        return gonderen;
    }
    
    string getAlici(){
        return alici;
    }
    
    double getAgirlik(){
        return agirlik;
    }
    
    string getTeslimatTipi(){
        return teslimatTipi;
    }
    
    void setTakipNo(string no){
        takipNo = no;
    }
    
    void setGonderen(string gon){
        gonderen = gon;
    }
    
    void setAlici(string al){
        alici = al;
    }
    
    void setAgirlik(double agir){
        if(agir > 0)
            agirlik = agir;
        else{
            cout<<"Dikkat gecersiz agirlik!"<<endl;
        }
    }
    
    void setTeslimatTipi(string tip){
    if(tip == "standart" || tip == "ekspres"){
            teslimatTipi = tip;
        }
        else{
            cout<<"Gecersiz secim, sadece standart veya ekspres olabilir! "<<endl;
        }
    }
    
    double kargoUcreti(){
        if(teslimatTipi == "standart"){
            return agirlik * 10.0;
        }
        else if(teslimatTipi == "ekspres"){
            return agirlik * 25.0;
        }
        return 0.0;
    }
    
    int teslimatSuresi(){
        if(teslimatTipi == "standart"){
            return 5;
        }
        else if(teslimatTipi == "ekspres"){
            return 1;
        }
        return 0;
    }
    
    void kargoYazdir(){
        cout<<"=========KARGO BİLGİLERİ========="<<endl;
        cout<<"Takip No: "<<takipNo<<endl;
        cout<<"Gonderen: "<<gonderen<<endl;
        cout<<"Alici: "<<alici<<endl;
        cout<<"Agirlik: "<<agirlik<<" kg"<<endl;
        cout<<"Teslimat Tipi: "<<teslimatTipi<<endl;
        cout<<"Kargo Ucreti: "<<kargoUcreti()<<" TL"<<endl;
        cout<<"Teslimat Suresi: "<<teslimatSuresi()<<" gun"<<endl;
        cout<<"================================="<<endl<<endl;
    }
    
};

int main() {
    Kargo k1("TR-100200","Ahmet Yilmaz","Ayse Demir", 2.5,"standart");
    k1.kargoYazdir();
    
    k1.setTeslimatTipi("ekspres");
    k1.setAgirlik(4.0);
    k1.kargoYazdir();
    
    k1.setAgirlik(-1.5);
    
    k1.setTeslimatTipi("hizli-gonderim");
    k1.kargoYazdir();

    return 0;
}
